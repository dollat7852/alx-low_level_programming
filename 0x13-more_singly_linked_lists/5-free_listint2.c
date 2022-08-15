#include "lists.h"

/**
 * free_listint2 - free listint_t
 * @head: pointer to head reference to the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}

