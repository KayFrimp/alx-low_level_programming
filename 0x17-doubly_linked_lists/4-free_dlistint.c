#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Address of First Node
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
