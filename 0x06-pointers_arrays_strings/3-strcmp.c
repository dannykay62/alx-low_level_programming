#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - function compares strings
 * @s1: first input string
 * @s2: second input string
 * Return: the diff between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
