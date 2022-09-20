#include <stdio.h>

/**
 * puts_half - function that prints half of a string, followed by a new line
 * print the second half of the string
 * If the number of characters is odd, the function should print
 * the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 * @str: input string
 * Return: nothing
 */

void puts_half(char *str)
{
	int len = 0, i, n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;

	else
		n = len % 2;

	for (i = n; i < len; i++)
		putchar(str[i]);
}
