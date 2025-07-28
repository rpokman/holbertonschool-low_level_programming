#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%u] %s\n", h->len, h->str);
		}
		count++;
	}
	return (count);
}
