#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns number of elements in a linked list list_t list
 * @h: head - pointer to the first node in list
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = NULL;

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
