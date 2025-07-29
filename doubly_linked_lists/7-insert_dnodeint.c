#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the doubly linked list
 * @idx: Index where the new node should be inserted (starting at 0)
 * @n: Value to store in the new node
 *
 * Return: Address of the new node, or NULL if insertion fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new_node;
	unsigned int a = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; current != NULL; current = current->next, a++)
	{
		if (a == idx - 1)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = current->next;
			new_node->prev = current;

			if (current->next != NULL)
				current->next->prev = new_node;

			current->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
