#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates new dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to the new dog structure created
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *newname, *newowner;
	int lenname = 0, lenowner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[lenname])
		lenname++;
	while (owner[lenowner])
		lenowner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	newname = malloc(lenname + 1);
	if (newname == NULL)
		return (NULL);

	for (i - 0; name[i]; i++)
		newname[i] = name[i];
	newname[i] = '\0';

	newowner = malloc(lenowner + 1);
	if (newowner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		newowner[i] = owner[i];
	newowner[i] = '\0';

	new_dog->name = newname;
	new_dog->age = age;
	new_dog->owner = newowner;
	return (new_dog);
}

