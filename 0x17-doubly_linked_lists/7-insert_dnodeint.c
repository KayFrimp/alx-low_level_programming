#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to address of first node
 * @idx: Index of node to return
 * @n: Integer value of new node
 *
 * Return: Address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *ptr;

	if (*h == NULL && idx == 0)
		return (add_firstdnodeint(h, n));

	if (*h == NULL && idx > 0)
		return (NULL);

	ptr = *h;
	while (idx > 0)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		idx--;
	}

	if (ptr->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = ptr->prev;
	ptr->prev->next = new_node;
	new_node->next = ptr;
	ptr->prev = new_node;

	return (new_node);
}
