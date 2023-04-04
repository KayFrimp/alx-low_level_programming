#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list
 * @head: Double pointer to first element
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	temp = *head;
	head = NULL;
	*head = NULL;
	**head = NULL;
	while (temp != NULL)
	{
		ptr = temp->next;
		free(temp);
		temp = ptr;
	}
}
