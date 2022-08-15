#include "lists.h"

/**
 * sum_listint - sum of all the data in a list
 * @head: reference to the head
 *
 * Return: sum of all data, 0 if not exist
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
