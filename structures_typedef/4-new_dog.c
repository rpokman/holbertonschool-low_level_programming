#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog_t struct, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int len_name, len_owner;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	len_name = strlen(name);
	new->name = malloc(sizeof(char) * (len_name + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	len_owner = strlen(owner);
	new->owner = malloc(sizeof(char) * (len_owner + 1));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	strcpy(new->name, name);
	strcpy(new->owner, owner);
	new->age = age;

	return (new);
}
