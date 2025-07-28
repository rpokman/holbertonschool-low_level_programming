#include "lists.h"

/**
 * print_list - Affiche tous les éléments d'une liste list_t
 * @h: pointeur vers le premier nœud de la liste (la tête)
 *
 * Return: le nombre de nœuds affichés
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
