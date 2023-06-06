#include "lists.h"

/**
 * print_listint_safe - print list
 *
 * @head: pointer
 * Return: int
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *list;
	size_t size = 0, i;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		size++;

		temp = temp->next;
		list = head;
		for (i = 0; i < size; i++)
		{
			if (temp == list)
			{
				printf("-> [%p} %d\n", (void *)temp, temp->n);
				return (size);
			}
			list = list->next;
		}
		if (!head)
			exit(98);
	}
	return (size);
}
