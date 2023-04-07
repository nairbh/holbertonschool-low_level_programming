#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 *
 * This function frees a dlistint_t
 * each node one by one, starting from the head.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temps;

		while (head)
		{
			temps = head;
			head = head->next;
			free(temps);
		}
}
