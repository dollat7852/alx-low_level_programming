#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print members of struct dog
 * @d: pointer to dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)"
	printf("Name: %s\n", d->name);
	if (d->age == NULL)
		printf("Age: %s\n", "(nil)");
	else
		printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
