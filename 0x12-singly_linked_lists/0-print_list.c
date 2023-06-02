#include "lists.h"

/**
 * print_list - print list
 *
 * @h: pointeer
 * Return: int
 */
size_t print_list(const list_t *h)
{
	size_t size;

	for (size = 0; h; size++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (size);
}
