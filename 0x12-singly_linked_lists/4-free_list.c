#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - function to print nodes of a list
 * @head: pointer to the head of the list
 * Return: size_t
 */

void free_list(list_t *head)
{
	list_t *h;

	while (head != NULL)
	{
		free(head->str);
		h = head->next;
		free(head);
	}
}
