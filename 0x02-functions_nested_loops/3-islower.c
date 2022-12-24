#include "main.h"

/**
 * _islower - checks for lower case character
 * @c: char to check
 * Return: 1 if character is lower, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
