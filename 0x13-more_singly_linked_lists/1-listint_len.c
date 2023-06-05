#include "lists.h"

/**
 * listint_len - number of elements in a linked list
 *
 * @h: pointer
 * Return: int
 */
size_t listint_len(const listint_t *h)
{
	size_t size;

	for (size = 0; h; size++)
		h = h->next;
	return (size);
}
