#include "lists.h"

/**
 * print_listint - print all elements
 *
 * @h: pointer
 * Return: int
 */
size_t print_listint(const listint_t *h)
{
	size_t size;

	for (size = 0; h; size++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
