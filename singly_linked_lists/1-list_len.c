#include "lists.h"

/**
* list_len - Retourne le nombre d’éléments dans une liste list_t
* @h: pointeur vers la tête de la liste
*
* Return: le nombre de nœuds
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
