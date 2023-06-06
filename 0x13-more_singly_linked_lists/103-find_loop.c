#include "lists.h"

/**
 * find_listint_loop - find loop
 *
 * @head: pointer
 * Return: address
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *list, *ahead;

	list = ahead = head;
	while (list && ahead && ahead->next)
	{
		list = list->next;
		ahead = ahead->next->next;
		if (list == ahead)
		{
			list = head;
			break;
		}
	}

	if (!list || !ahead || !(ahead->next))
		return (NULL);

	while (list != ahead)
	{
		list = list->next;
		ahead = ahead->next;
	}
	return (ahead);
}
