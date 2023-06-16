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
	int count = -1;

	if (head == NULL)
		return (NULL);

	ptr = head;
	while (ptr->next != NULL)
	{
		count++;
		if ((count + 1) == (int)index)
			return (ptr->next);
		ptr = ptr->next;
	}

	return (NULL);
}
