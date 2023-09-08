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
