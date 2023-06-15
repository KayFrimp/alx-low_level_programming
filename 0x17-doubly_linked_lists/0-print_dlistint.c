#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t list
 * @h: Pointer to head node of dlistint_t list
 *
 * Return: Number of nodes in the dlistint_t list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = NULL;

	/* Check if list is emppty */
	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
