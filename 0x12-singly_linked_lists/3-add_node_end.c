#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_l list
 * @head: Pointer to the pointer of first node
 * @str: String - (malloc'ed string)
 *
 * Return: Return the address of the new element / NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = NULL, *new;
	unsigned int len = 0;

	ptr = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[len] != '\0')
		len++;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
	return (new);
}
