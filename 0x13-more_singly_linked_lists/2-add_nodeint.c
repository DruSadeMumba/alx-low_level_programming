#include "lists.h"

/**
 * add_nodeint - add node at beginning
 *
 * @head: pointer to pointer
 * @n: int
 * Return: address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list;

	list = malloc(sizeof(listint_t));

	if (!list)
		return (NULL);
	list->n = n;
	list->next = *head;
	(*head) = list;

	return (list);
}
