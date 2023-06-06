#include "lists.h"

/**
 * delete_nodeint_at_index - delete element
 * @head: pointer
 * @index: position of element
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head, *prev;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; (i < (index - 1) && temp); i++)
		temp = temp->next;

	if (i != (index - 1) || !(temp->next))
		return (-1);

	prev = temp->next;
	temp->next = prev->next;

	free(prev);
	return (1);
}
