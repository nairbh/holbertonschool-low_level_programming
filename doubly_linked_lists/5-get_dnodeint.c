#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to be returned.
 *
 * Return: Pointer to the nth node, or NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	dlistint_t *current = head;

	while (current)
	{
		if (count == index)

			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
