#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at a given index
* @head: Double pointer to the head of the list
* @index: The index of the node to delete
*
* Return: 1 if successful, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (i == index)
		{
			if (current->prev)
				current->prev->next = current->next;
			if (current->next)
				current->next->prev = current->prev;

			free(current);
			return (1);
		}

		current = current->next;
		i++;
	}

	return (-1);
}
