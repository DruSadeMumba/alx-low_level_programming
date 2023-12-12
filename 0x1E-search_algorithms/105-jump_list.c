#include "search_algos.h"

/**
 * next_list - searches for a value in a sorted array of ints
 * @list: array of ints
 * @size: size of list
 * @value: int to search
 * Return: value or NULL
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size), prev = 0;
	listint_t *current, *next;

	if (!list || size == 0)
		return (NULL);


	for (current = next = list; next->index + 1 < size && next->n < value;)
	{
		current = next;
		for (prev += jump; next->index < prev; next = next->next)
		{
			if (next->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", next->index, next->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			current->index, next->index);

	for (; current->index < next->index && current->n < value;
	current = current->next)
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
	printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);

	return (current->n == value ? current : NULL);
}
