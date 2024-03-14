#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Entry point
 * @name: Name of the dog (type : char*)
 * @age : Age of the dog (type : float)
 * @owner: Owner of the dog (type char*)
 * @d: character to be verified
 * Description: This structure defines a dog name, age and owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
