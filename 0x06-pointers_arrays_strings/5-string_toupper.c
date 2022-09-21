#include "hilberton.h"
#include <stdio.h>

/**
 * string_toupper - function changes all lower case letters
 * of a string to upper case
 * @s: input string
 * Return: char pointer to the converted string
 */

char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
