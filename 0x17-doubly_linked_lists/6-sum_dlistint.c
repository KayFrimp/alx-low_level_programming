#include "lists.h"

/**
 * sum_dlistint - Sums all data(n) in a dllist_t list
 * @head: Address of first node
 *
 * Return: Sum of all data(n) or NULL
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
