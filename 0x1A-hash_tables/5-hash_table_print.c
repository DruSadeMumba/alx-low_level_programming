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
