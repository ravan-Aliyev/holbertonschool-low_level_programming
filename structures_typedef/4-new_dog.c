#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/** 
 * new_dog - create new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the owner.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = malloc(sizeof(dog_t));

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
