#include "dog.h"
#include <stdlib.h>

/**
 * free_dog [ frees dog struct
 * @d: a pointer to the struct to be freed
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
