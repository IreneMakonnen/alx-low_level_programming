#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable type
 * @d: Pointer to variable
 * @name: Element in structure
 * @age: Element in structure
 * @owner: Element in structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
