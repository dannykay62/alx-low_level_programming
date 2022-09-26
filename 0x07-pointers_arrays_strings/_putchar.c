#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: character to print
 * Return: 1 for success
 * error, return -1 with errno set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
