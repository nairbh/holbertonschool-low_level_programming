#include "lists.h"
/*
* add_dnodeint - Adds a new node at the beginning.
* @head: Double pointer to the head of the list.
* @n: Integer value to be stored in the new node.
* Return: Pointer to the new node.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
