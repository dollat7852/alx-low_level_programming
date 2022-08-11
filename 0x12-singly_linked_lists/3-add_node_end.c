#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function to add a node to the end of a list
 * @head: pointer to the head of the list
 * @str: string to be added to the begining of the list
 * Return: size_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));

	if (!ptr)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);

	while(*head->next)
	{
		*head = *head->next;
	}
	*head->next = ptr;
	return (ptr);


}
