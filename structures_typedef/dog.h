#ifndef DOG_HEADER
#define DOG_HEADER

/**
 * struct dog - Contain name, age and owner member.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
