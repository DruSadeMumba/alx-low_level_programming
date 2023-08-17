#include "lists.h"

/**
 * add_dnodeint_end - add end node
 * @head: pointer
 * @n: node value
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	h = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head)
	{
		while (h->next)
			h = h->next;
		h->next = new;
	}
	else
		*head = new;

	new->prev = *head;
	return (new);
}
