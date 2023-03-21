#include "dog.h"
#include "stdlib.h"

/**
 * new_dog - creates a new dog
 * @name: Name of dog
 * @age: age of dog
 * @owner: Dog owner
 *
 * Return: Always dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
