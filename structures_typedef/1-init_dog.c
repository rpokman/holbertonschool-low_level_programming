#include <stdio.h>
#include "dog.h"

/**
* init_dog - initialise une variable de type struct dog
* @d: pointeur vers la structure à initialiser
* @name: nom du chien
* @age: âge du chien
* @owner: propriétaire du chien
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
