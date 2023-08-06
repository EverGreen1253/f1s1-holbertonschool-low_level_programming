#include <stdio.h>
#include "dog.h"

/**
 * init_dog - check the code
 * @d: pointer to the dog struct
 * @name: pointer to string
 * @age: float
 * @owner: pointer to string
 *
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
