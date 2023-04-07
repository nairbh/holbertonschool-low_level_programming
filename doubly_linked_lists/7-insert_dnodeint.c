#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data for the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int i;

	if (*h == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!*h)
	{
		*h = new;
		return (new);
	}

	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (i = 0; current && i < idx - 1; i++)
		current = current->next;
	if (!current)
	{
		free(new);
	return (NULL);
	}
	new->next = current->next;
	new->prev = current;
	if (current->next)
		current->next->prev = new;
	current->next = new;
	return (new);
}
