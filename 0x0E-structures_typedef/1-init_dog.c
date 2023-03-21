#include "dog.h"

/**
 * init_dog - Initializes struct dog
 * @d: pointer to struct dog
 * @name: pointer to dog name
 * @age: dog age
 * @owner: pointer to owner of dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
