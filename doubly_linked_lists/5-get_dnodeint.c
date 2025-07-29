#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
* @head: pointer to the head of the list
* @index: index of the node to return, starting at 0
*
* Return: pointer to the node, or NULL if it doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int a = 0;

for (a = 0; head != NULL; a++)
{
	if (a == index)
	{
		return (head);
	}
	head = head->next;
}
return (NULL);
}
