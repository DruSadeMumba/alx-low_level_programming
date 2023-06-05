#include "lists.h"

/**
 * sum_listint - sum of elements
 *
 * @head: pointer
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int i, sum = 0;

	if (!head)
		return (0);

	for (i = 0; head; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
