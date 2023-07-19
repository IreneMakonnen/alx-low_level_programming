#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: Elements of structure
 * @age: Elements of structure
 * @owner: Elements of structure
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_length, owner_length, i;
	dog_t *newdog_ptr;

	name_length = 0;
	while (name[name_length] != '\0')
		name_length++;
	owner_length = 0;
	while (owner[owner_length] != '\0')
		owner_length++;

	newdog_ptr = (dog_t *)malloc(sizeof(dog_t));
	if (newdog_ptr == 0)
		return (0);
	newdog_ptr->name = (char *)malloc((name_length + 1) * sizeof(char));
	if (newdog_ptr->name == 0)
	{
		free(newdog_ptr);
		return (0);
	}
	newdog_ptr->owner = (char *)malloc((owner_length + 1) * sizeof(char));
	if (newdog_ptr->owner == 0)
	{
		free(newdog_ptr->name);
		free(newdog_ptr);
		return (0);
	}

	for (i = 0; i < name_length; i++)
		newdog_ptr->name[i] = name[i];
	newdog_ptr->name[name_length] = '\0';
	for (i = 0; i < owner_length; i++)
		newdog_ptr->owner[i] = owner[i];
	newdog_ptr->owner[owner_length] = '\0';
	newdog_ptr->age = age;

	return (newdog_ptr);
}
