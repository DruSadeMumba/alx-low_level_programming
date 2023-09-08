#include "hash_tables.h"

/**
 * sshash_table_create - create sorted shash table
 * @size: array size
 * Return: pointer
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(shash_table_t));
	if (!sht)
		return (NULL);

	sht->size = size;
	sht->array = malloc(sizeof(shash_node_t *) * size);

	if (!sht->array)
		return (NULL);
	for (i = 0; i < size; i++)
		sht->array[i] = NULL;

	return (sht);
}

/**
 * shash_table_set - add element
 * @sht: pointer
 * @key: key
 * @value: value
 * Return: 1 or 0
 */
int sshash_table_set(shash_table_t *sht, const char *key, const char *value)
{
	shash_node_t *new;
	char *copy = strdup(value);
	unsigned long n, i;

	if (!sht || !key || !value || !copy)
		return (0);

	n = key_index((const unsigned char *)key, sht->size);
	for (i = n; sht->array[i]; i++)
		if (strcmp(sht->array[i]->key, key) == 0)
		{
			free(sht->array[i]->value);
			sht->array[i]->value = copy;
			return (1);
		}

	new = malloc(sizeof(shash_node_t));
	if (!new)
	{
		free(copy);
		return (0);
	}

	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = copy;
	new->next = sht->array[n];
	sht->array[n] = new;

	return (1);
}

/**
 * shash_table_get - retrieve value
 * @sht: pointer
 * @key: key
 * Return: value
 */
char *shash_table_get(const shash_table_t *sht, const char *key)
{
	unsigned long n;
	shash_node_t *new;

	if (!sht || !key)
		return (NULL);
	n = key_index((const unsigned char *)key, sht->size);

	new = (sht->array)[n];
	while (new && strcmp(new->key, key) != 0)
		new = new->next;
	if (!new)
		return (NULL);
	else
		return (new->value);
}

/**
 * shash_table_print - prints a shash table
 * @sht: pointer
 */
void shash_table_print(const shash_table_t *sht)
{
	unsigned long n = 0;
	shash_node_t *new;
	char *comma = "";

	if (!sht || !sht->array)
		return;
	printf("{");
	while (n < sht->size)
	{
		new = ((sht->array)[n]);
		while (new)
		{
			printf("%s'%s': '%s'", comma, new->key, new->value);
			comma = ", ";
			new = new->next;
		}
		n++;
	}
	printf("}\n");
}

/**
 * shash_table_delete
 * @sht: pointer
 */
void shash_table_delete(shash_table_t *sht)
{
	unsigned long int i = 0;
	shash_node_t *new, *next;

	while (i < sht->size)
	{
		new = (sht->array)[i];
		while (new)
		{
			next = new->next;
			if (new->key)
				free(new->key);
			if (new->value)
				free(new->value);
			new->key = NULL;
			new->value = NULL;
			free(new);
			new = next;
		}
		i++;
	}
	free(sht->array);
	free(sht);
}
