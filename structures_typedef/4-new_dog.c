#include <stdlib.h>
#include <string.h>
#include "main.h"
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @a: name of the dog
 * @b: age of the dog
 * @c: owner of the dog
 *
 * Return: pointer to new dog_t struct, or NULL on failure
 */

dog_t *new_dog(char *a, float b, char *c)
{
	dog_t *d;
	int e, f;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	e = strlen(a);
	d->name = malloc(sizeof(char) * (e + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	f = strlen(c);
	d->owner = malloc(sizeof(char) * (f + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	strcpy(d->name, a);
	strcpy(d->owner, c);
	d->age = b;

	return (d);
}
