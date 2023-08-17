#include "lists.h"

/**
 * get_dnodeint_at_index - get node
 * @head: pointer
 * @index: node index
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	while (index && head->next)
	{
		head = head->next;
		index -= 1;
	}
	if (index == 0)
		return (head);
	return (NULL);
}
