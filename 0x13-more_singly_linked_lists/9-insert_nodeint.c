#include "lists.h"

/**
 * insert_nodeint_at_index - insert element
 * @head: pointer to pointer
 * @idx: index
 * @n: int
 * Return: address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *list, *ahead;

	if (!head || !list)
		return (NULL);
	list = malloc(sizeof(listint_t));
	if (!list)
		return (NULL);
	list->n = n;
	list->next = NULL;

	if (idx == 0)
	{
		list->next = *head;
		*head = list;
		return (list);
	}

	ahead = *head;
	for (i = 0; (ahead && i < idx); i++)
	{
		ahead = ahead->next;

		if (!ahead)
		{
			free(list);
			return (NULL);
		}
	}
	list->next = ahead->next;
	ahead->next = list;
	return (list);
}

