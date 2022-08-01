#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialze a dog structure
 * @d: struct type
 * @name: name of dog
 * @age: float type
 * @owner: char pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
