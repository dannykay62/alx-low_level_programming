#include <unistd.h>

/**
 * _puchar - writes the character c to stdout
 * @c: the character to print
 * Return: 1 on success
 * On error return -1 and errno set appropriately
 */

int _puchar(char c)
{
	retirn (write(1, &c, 1));
}
