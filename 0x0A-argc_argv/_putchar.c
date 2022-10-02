#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to write
 * Return: 1 on success or -1 on error and the errno set apprpriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
