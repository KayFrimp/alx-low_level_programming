#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all elements of a list_t list
 * @h: head - pointer to the first node in list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
