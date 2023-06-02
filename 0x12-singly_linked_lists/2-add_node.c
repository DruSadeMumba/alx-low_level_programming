#include "lists.h"

/**
 * add_node - add node at beginning of list
 *
 * @head: pointer to pointeer
 * @str: string
 *
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	int l;
	list_t *list;

	for (l = 0; str[l]; l++)
		;
	list = malloc(sizeof(list_t));

	if (!list)
		return (NULL);
	list->str = strdup(str);
	list->len = l;
	list->next = (*head);
	(*head) = list;
	return (list);
}
