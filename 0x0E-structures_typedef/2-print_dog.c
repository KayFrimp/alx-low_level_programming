#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints struct dog
 * @d: pointer to an instance of dog
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->age < 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
