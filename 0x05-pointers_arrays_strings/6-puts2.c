#include <stdio.h>

/**
 * puts2 - function, prints every character of a string
 * starting with the first character
 * @str: input string
 * Return: nothing
 */

void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; i <= len; i += 2)
		putchar(str[i]);

	putchar('\n');
}
