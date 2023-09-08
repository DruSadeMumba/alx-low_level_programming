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

	if (!ht || !key || *key == '\0')
		return (NULL);
	n = key_index((const unsigned char *)key, ht->size);

	new = (ht->array)[n];
	if (!new)
		return (NULL);
	else
		return (new->value);
	while (new && strcmp(new->key, key) != 0)
		new = new->next;
}
