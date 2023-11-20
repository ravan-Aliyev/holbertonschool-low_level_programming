#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print dog datas
 * @d: Struct dog.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL || d->owner == NULL)
		{
			printf("(nil)\n");
			return;
		}
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
