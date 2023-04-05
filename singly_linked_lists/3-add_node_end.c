#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be duplicated and added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = new;
	}

	return (new);
}
