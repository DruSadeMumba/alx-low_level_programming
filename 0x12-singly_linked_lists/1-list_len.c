#include "lists.h"

/**
 * list_len - num of elements
 *
 * @h: pointer
 * Return: int
 */
size_t list_len(const list_t *h)
{
	size_t size;

	for (size = 0; h; size++)
		h = h->next;
	return (size);
}
