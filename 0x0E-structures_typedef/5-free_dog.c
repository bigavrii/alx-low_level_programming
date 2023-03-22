#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * Free_dog: Frees dogs
 * Desc: The dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d);
}
