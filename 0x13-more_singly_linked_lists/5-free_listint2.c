#include "lists.h"

/**
 * free_listint2 - free list
 *
 * @head: pointer to pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (!head)
		return;
	while (*head)
	{
		list = (*head)->next;
		free(*head);
		*head = list;
	}
	*head = NULL;
}
