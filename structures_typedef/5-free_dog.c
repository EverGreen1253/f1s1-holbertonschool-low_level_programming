#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - check the code
 * @d: pointer to the dog_t type
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
