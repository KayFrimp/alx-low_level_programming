#include "lists.h"

/**
 * listint_len - Returns number of  elements of a listint_t list
 * @h: Pointer to the first element
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int n = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}
