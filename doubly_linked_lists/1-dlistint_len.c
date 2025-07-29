#include "lists.h"

/**
 * dlistint_len - Counts the number of nodes in a dlistint_t linked list
 * @h: Pointer to the head of the list
 *
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{

size_t count = 0;

for (; h != NULL; h = h->next)
{
	count++;
}
return (count);
}
