#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list
 * @head: Double pointer to first element
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = *head;
	while (temp != NULL)
	{
		*head = temp->next;
		free(temp);
		temp = *head;
	}
	*head = NULL;
}
