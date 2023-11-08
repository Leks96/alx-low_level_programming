#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* free_dog - frees the memory associated with a dog.
* @d: A pointer to the dog to be freed.
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
