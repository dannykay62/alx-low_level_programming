#include "daniel.h"

/**
 * _puts_recursion - function prints a string followd by a new line
 * @s: input string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		_puts_recurcursion(s + 1);
	}
	else
		_putchar('\n');
}
