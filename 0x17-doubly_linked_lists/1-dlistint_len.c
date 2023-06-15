#include "lists.h"

/**
 * dlistint_len - Returns number of elements in a dlistint_t list
 * @h: Pointer to head node of dlistint_t list
 *
 * Return: Number of nodes in the dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = NULL;

	/* Check if list is emppty */
	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
