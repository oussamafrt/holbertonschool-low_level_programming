#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure to be freed
 *
 * This function frees the memory allocated for the given dog structure.
 * Finally, it frees the memory allocated for the dog structure itself.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d);
		free(d->owner);
	}
}
