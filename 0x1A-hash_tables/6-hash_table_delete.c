#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
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
