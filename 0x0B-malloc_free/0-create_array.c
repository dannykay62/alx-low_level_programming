#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the arry
 * @c: character to initialize the array
 * Return: pointer to the array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = cc;
		i++;
	}
	return (s);
}
