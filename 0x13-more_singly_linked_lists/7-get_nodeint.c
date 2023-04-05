#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Pointer to first node
 * @index: index of the node
 *
 * Return: nth node of list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;

	ptr = head;
	for (i = 0; ptr != NULL && i < index; i++)
		ptr = ptr->next;
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
