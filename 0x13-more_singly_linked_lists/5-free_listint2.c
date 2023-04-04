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
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
