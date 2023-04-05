#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * @head: Pointer to first node
 * @index: index of the node
 *
 * Return: 1 for success, -1 for failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr, *temp;

	if (*head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; ptr != NULL && i < index; i++)
	{
		temp = ptr;
		ptr = ptr->next;
	}
	if (ptr == NULL)
		return (-1);
	temp->next = ptr->next;
	free(ptr);
	return (1);
}
