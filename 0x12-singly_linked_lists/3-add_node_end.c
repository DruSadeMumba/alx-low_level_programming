#include "lists.h"

/**
 * add_node_end - add node at list end
 *
 * @head: pointer to pointer
 * @str: string
 *
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int l;
	list_t *list, *ahead = *head;

	for (l = 0; str[l]; l++)
		;
	list = malloc(sizeof(list_t));

	if (!list)
		return (NULL);
	list->str = strdup(str);
	list->len = l;
	list->next = '\0';

	if (!*head)
	{
		*head = list;
		return (list);
	}

	while (ahead->next)
		ahead = ahead->next;
	ahead->next = list;
	return (list);
}
