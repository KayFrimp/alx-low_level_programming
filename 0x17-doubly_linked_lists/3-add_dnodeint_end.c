#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: pointer to head pointer of dlistint_t list
 * @n: Integer value of new node
 *
 * Return: Address of the new element or NUll
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *ptr;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		/* return (add_firstdnodeint(head, n)); */
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new_node;
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = ptr;

	return (new_node);
}

/**
 * add_firstdnodeint - Adds first node to a dlistint_t list
 * @head: pointer to head pointer of dlistint_t list
 * @n: Integer value of first node
 *
 * Return: Address of first node or NULL
 *
 * dlistint_t *add_firstdnodeint(dlistint_t **head, const int n)
 * {
 *	dlistint_t *first_node = malloc(sizeof(dlistint_t));
 *
 *	if (first_node == NULL)
 *		return (NULL);
 *
 *	first_node->prev = NULL;
 *	first_node->n = n;
 *	first_node->next = NULL;
 *	*head = first_node;
 *	return (*head);
 * }
 */
