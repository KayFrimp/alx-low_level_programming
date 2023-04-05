#include "lists.h"

/**
 * sum_listint - Sums all the data(n) of a listint_t list
 * @head: pointer to furst element
 *
 * Return: sum of data / 0 for empty list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
