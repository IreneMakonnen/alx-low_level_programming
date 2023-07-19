#include "dog.h"

/**
 * free_dog - Frees dogs
 * @d: Pointer to variable of structure
 */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
