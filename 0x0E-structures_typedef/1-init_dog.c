#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function initialize a variable struct dog
 * @d: struct to be initialized
 * @name: dog's name
 * @age: age of the dog
 * @owner: dog owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
