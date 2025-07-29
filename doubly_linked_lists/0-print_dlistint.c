#include "lists.h"

/**
* print_dlistint - Prints all the elements of a list_t list
* @h: pointer to the head of the list
*
* Return: the number of nodes printed
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
		{
		printf("%d\n", h->n);
		count++;
		}
	return (count);
}
