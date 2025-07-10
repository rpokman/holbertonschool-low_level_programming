#include <stdio.h>
#include "dog.h"
#include "main.h"

void print_dog(struct dog *d)
{
	if (d == NULL)
    {
        printf ("(nil)\n");
        return;
    }

		printf("name: %s\n", d->name);
		printf("age: %f\n", d->age);
		printf("owner: %s\n", d->owner);
		return;
}
