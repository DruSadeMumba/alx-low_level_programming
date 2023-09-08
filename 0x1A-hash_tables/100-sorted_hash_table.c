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
