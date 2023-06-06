#include "lists.h"


/**
 * real - realloc mem
 * @l: list
 * @s: size
 * @new: node
 * Return: pointer
 */

const listint_t **real(const listint_t **l, size_t s, const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(sizeof(listint_t *) * s);
	if (!newlist)
	{
		free(l);
		exit(98);
	}
	for (i = 0; i < s - 1; i++)
		newlist[i] = l[i];
	newlist[i] = new;
	free(l);
	return (newlist);
}

/**
 * print_listint_safe - print list
 *
 * @head: pointer
 * Return: int
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t **list = NULL;
	size_t size = 0, i;

	while (head != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p} %d\n", (void *)head, head->n);
				free(list);
				return (size);
			}
		}
		size++;
		list = real(list, size, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (size);
}
