#include <stdio.h>
#include "dog.h"
#include "main.h"

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to struct dog
 *
 * If an element is NULL, it prints (nil) instead.
 * If d is NULL, it does nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)\n");
		return;
	}

		printf("name: %s\n", d->name);
		printf("age: %f\n", d->age);
		printf("owner: %s\n", d->owner);
		return;
}
