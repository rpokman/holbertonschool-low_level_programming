#include "lists.h"
/**
*add_node - adding a new node at the beginning (Head)
*@head: Double pointer to the head
*@str: pointer to a string
*Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;

	unsigned int len = 0;

	dup_str = strdup(str);

if (dup_str == NULL)
	return (NULL);
while (str[len])
len++;
	new_node = malloc(sizeof(list_t));
if (new_node == NULL)
	{
	free(dup_str);
	return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

return (new_node);
}
