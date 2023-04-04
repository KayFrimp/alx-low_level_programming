#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list
 * @h: Pointer to the first element
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int n = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		n++;
		ptr = ptr->next;
	}
	return (n);
}
