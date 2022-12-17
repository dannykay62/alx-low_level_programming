#include "main.h"

/**
 * _memcpy - function copies memory area
 * @dest: destination to copy memory area
 * @src: memory area source to be copied
 * @n: number of bytes
 * Return: returns pointer to the copied location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
