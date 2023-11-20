#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - create new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the owner.
 *
 * Return: New dog struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(strlen(name) + 1);

	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	strcpy(my_dog->name, name);

	my_dog->age = age;

	my_dog->owner = malloc(strlen(owner) + 1);

	if (my_dog->owner == NULL)
	{
		free(my_dog);
		free(my_dog->name);
		return (NULL);
	}

	strcpy(my_dog->owner, owner);

	return (my_dog);
}
