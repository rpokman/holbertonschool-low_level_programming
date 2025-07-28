#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{

size_t count = 0;

for (; h != NULL; h = h->next)
{
	count++;
}
return (count);
}
