#include "hash_tables.h"

/**
 * shash_table_create - create sorted hash table
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
#include "hash_tables.h"

/**
 * hash_table_set - add element
 * @ht: pointer
 * @key: key
 * @value: value
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *copy = strdup(value);
	unsigned long n, i;

	if (!ht || !key || !value || !copy)
		return (0);

	n = key_index((const unsigned char *)key, ht->size);
	for (i = n; ht->array[i]; i++)
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy;
			return (1);
		}

	new = malloc(sizeof(hash_node_t));
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
	new->next = ht->array[n];
	ht->array[n] = new;

	return (1);
}
#include "hash_tables.h"

/**
 * hash_table_get - retrieve value
 * @ht: pointer
 * @key: key
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long n;
	hash_node_t *new;

	if (!ht || !key)
		return (NULL);
	n = key_index((const unsigned char *)key, ht->size);

	new = (ht->array)[n];
	while (new && strcmp(new->key, key) != 0)
		new = new->next;
	if (!new)
		return (NULL);
	else
		return (new->value);
}
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long n = 0;
	hash_node_t *new;
	char *comma = "";

	if (!ht || !ht->array)
		return;
	printf("{");
	while (n < ht->size)
	{
		new = ((ht->array)[n]);
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
#include "hash_tables.h"

/**
 * hash_table_delete
 * @ht: pointer
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *new, *next;

	while (i < ht->size)
	{
		new = (ht->array)[i];
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
	free(ht->array);
	free(ht);
}
