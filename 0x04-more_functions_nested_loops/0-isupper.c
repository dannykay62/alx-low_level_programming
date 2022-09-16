#include "main.h"

#include <ctype.h>

/**
 *  _isupper - checks for uppercase char
 *  @c: ASCII character
 * Return: 1 if c is uppercase else 0
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);

	return (0);
}
