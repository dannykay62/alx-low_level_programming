#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * including the termiating null bite (\0)
 * to the buffer pointed to by the dest
 *
 * @dest: pointer to destination of the string
 * @src: pointer to sourcse string to copy
 *
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
