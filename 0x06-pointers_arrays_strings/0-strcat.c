#include <stdio.h>
#include "holberton.h"

/**
 * _strcat - function, concatenates 2 strings
 * @dest: input string
 * @src: input string
 * Return: a pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
