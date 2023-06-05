#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: pointer
 */
void free_listint(listint_t *head)
{

	listint_t *list;

	while (head)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
