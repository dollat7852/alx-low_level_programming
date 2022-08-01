#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
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
		return (NULL);
	len = strlen(owner);
	new_dog->owner = malloc(len * sizeof(char) + 1);
	if (new_dog->owner == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
