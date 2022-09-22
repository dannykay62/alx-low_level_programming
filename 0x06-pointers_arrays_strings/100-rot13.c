#include "holberton.h"

/**
 * rot13 - function encodes a string using rot13
 * @s: input string to encode using rot13
 * Return: encode string
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while ((s[i] >= 'A' && s[i] <= 'z')
				|| (s[i] >= 'a' && s[i] <= 'z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'm')
					|| (s[i] >= 'A' && s[i] <= 'M'))
				s[i] += 13;
			else
				s[i] -= 13;
			i++;
		}
		i++;
	}
	return (s);
}
