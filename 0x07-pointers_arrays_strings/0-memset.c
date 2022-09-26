#include "holberton.h"

/**
 * _memset - function fills memory with constant byte
 * @s: location to fill
 * @b: char to fill location
 * @n: number of bytes to fill
 * Return: returns pointer to the location that is filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
