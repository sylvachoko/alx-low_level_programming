#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dogs
 * @d: dogs to free
 *
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
