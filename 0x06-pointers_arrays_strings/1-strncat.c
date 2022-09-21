#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - function concatenates 2 strings
 * @dest: input string
 * @src: input string
 * @n: input integer
 * Return: pointer to he resulting string
 */

char *_strncat(char *dest, char *src, int n)
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

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;
	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
