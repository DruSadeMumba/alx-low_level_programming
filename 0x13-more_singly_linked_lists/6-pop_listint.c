#include "lists.h"

/**
 * pop_listint - delete first element
 *
 * @head: pointer to pointer
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *ahead, *anotherhead = *head;
	int l;

	if (!head || !anotherhead)
		return (0);
	l = anotherhead->n;
	ahead = anotherhead->next;
	free(anotherhead);
	*head = ahead;
	return (l);
}
