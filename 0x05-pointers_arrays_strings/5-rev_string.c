#include <stdio.h>

/**
 * rev_string - function, reverse a string
 * @s: input string
 * Return: nothing
 */

void rev_string(char *s)
{
	in t len = 0, i = 0;
	char temp;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		temp = s[i];
		s[i++] = s[len];
		s[len] = temp;
	}
}
