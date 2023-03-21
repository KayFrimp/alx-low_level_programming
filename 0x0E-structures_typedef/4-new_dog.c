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

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc((_strlen(name) * sizeof(char)) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc((_strlen(owner) * sizeof(char)) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}

/**
 * _strlen - returns the length of a string
 * @s: Char pointer variable
 *
 * Return: Always the length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}

/**
 * *_strcpy - copies string pointed by a src pointer to a dest pointer
 * @src: Character pointer variable of source
 * @dest: Character pointer variable of destination
 *
 * Return: Returns pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, c;

	while (*(src + len) != 0)
		len++;
	for (c = 0; c <= len; c++)
	{
		*(dest + c) = *(src + c);
	}
	return (dest);
}
