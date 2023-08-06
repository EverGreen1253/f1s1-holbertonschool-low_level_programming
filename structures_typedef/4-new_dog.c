#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - check the code
 * @name: pointer to string
 * @age: float
 * @owner: pointer to string
 *
 * Return: pointer to struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
