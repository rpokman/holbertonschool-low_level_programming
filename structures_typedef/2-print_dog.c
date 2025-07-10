#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the struct dog
 *
 * Description: If d is NULL, the function does nothing.
 * If name or owner is NULL, prints (nil) instead.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("name: (nil)\n");
	else
		printf("name: %s\n", d->name);

	printf("age: %f\n", d->age);

	if (d->owner == NULL)
		printf("owner: (nil)\n");
	else
		printf("owner: %s\n", d->owner);
}
