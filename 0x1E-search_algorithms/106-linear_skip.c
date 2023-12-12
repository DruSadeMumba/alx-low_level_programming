#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted array of ints
 * @list: array of ints
 * @value: int to search
 * Return: value or NULL
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *next;

	if (!list)
		return (NULL);

	for (current = next = list; next->next && next->n < value;)
	{
		current = next;
		if (next->express)
		{
			next = next->express;
			printf("Value checked at index [%ld] = [%d]\n",
					next->index, next->n);
		} else
		{
			while (next->next)
				next = next->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			current->index, next->index);

	for (; current->index < next->index && current->n < value;
	current = current->next)
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
	printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);

	return (current->n == value ? current : NULL);
}
