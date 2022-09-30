#include "lists.h"

/**
 * add_dnodeint - A program to add a new node at the beginning list
 * @head: the start of the list
 * @n: in int value
 * Return: a dlistint_t item
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current, *new;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	current = *head;
	if (!new)
		return (0);
	if (!(*head))
		return (0);
	*head->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}
