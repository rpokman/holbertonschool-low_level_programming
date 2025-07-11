#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated to a dog
 * @d: pointer to the dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
