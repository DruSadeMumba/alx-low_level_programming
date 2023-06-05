#include "lists.h"

/**
 * free_listint2 - free list
 *
 * @head: pointer to pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *list, *ahead = *head;

	if (!head)
		return;
	while (ahead)
	{
		list = ahead->next;
		free(ahead);
		ahead = list;
	}
	*head = NULL;
}
