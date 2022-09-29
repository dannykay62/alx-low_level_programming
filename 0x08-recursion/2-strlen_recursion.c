#include "daniel.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: input string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		_strlen_recursion(s - 1);
	}
	else
	       (len);
}
