#include <stdio.h>
#include <string.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a new dog function that stores only dog name and owner.
 * @name: pointer
 * @age: float
 * @owner: pointer
 * Return: pointer to the new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len;

/*	(void) age; unused variable */

	/* create memory space for new_dog*/
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	len = strlen(name);
	new_dog->name = malloc(len * sizeof(char) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->owner = malloc(strlen(owner) * sizeof(char) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
