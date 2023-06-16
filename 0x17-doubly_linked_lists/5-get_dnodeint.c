#include "lists.h"

/**
 * get_dnodeint_at_index - Returns nth node of a dlistint_t list
 * @head: Address of first node
 * @index: Index of node to return
 *
 * Return: Address of node at given index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = head;
	while (index > 0)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		index--;
	}

	return (ptr);
}
