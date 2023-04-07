#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 * @head: pointer to the head of the list
 * @n: integer to be added to the new node
 *
 * Return: the address of the new element, or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;

	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		current = *head;

		while (current->next)
			current = current->next;
				current->next = new;
		new->prev = current;
	}

	return (new);
}
