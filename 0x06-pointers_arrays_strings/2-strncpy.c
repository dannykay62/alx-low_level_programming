#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - function copy strings
 * @dest: input string
 * @src: input string
 * @n: input integer
 * Return: pointer to the result string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0;
	int i = 0;
	char *temp = dest;
	char *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
