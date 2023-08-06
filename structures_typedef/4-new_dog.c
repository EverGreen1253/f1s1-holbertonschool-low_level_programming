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
	char *n;
	char *o;

	n = copy_string(name);
	o = copy_string(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}

	/**
	 * printf("copied name - %s\n", n);
	 */

	d->name = n;
	d->age = age;
	d->owner = o;

	return (d);
}

/**
 * get_size_of - check the code
 * @str: pointer to string passed in
 *
 * Return: int size of string passed in
 */
int get_size_of(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i = i + 1;
	}

	return (i);
}

/**
 * copy_string - check the code
 * @str: the string to be copied
 *
 * Return: pointer to copied string
 */
char *copy_string(char *str)
{
	int i = 0;
	int size;
	char *s;

	size = get_size_of(str);
	s = malloc(size);
	if (s == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i = i + 1;
	}
	s[i] = '\0';

	return (s);
}
