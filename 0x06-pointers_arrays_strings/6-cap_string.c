#include "holberton.h"
#include <stdio.h>

int check_separator(char c);

/**
 * cap_string - function capitalize all words of the string
 * @s: input string
 * Return: pointer s
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;

		if (check_separator(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}

	return (s);
}

/**
 * check_separator - checks for word separators - space, new-line, tabs,
 * ,, ;, ., !, ?, \", (, ), {, and }
 * @c: input character
 * Return: 1 if there is separator, 0 if not
 */

int check_separator(char c)
{
	int i = 0;
	char separators[13] = {' ', '\t', '\n', ',', ';',
		'.', '!', '?', '"', '(', ')', '{', '}'};

	for (; i < 13; i++)
	{
		if (c == separator[i])
			return (1);
	}
	return (0);
}
