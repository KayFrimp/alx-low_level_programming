#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs from memory
 * @d: pointer to dog_t (struct dog)
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
