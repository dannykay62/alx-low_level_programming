#include "daniel.h"

/**
 * _puts_recursion - function prints a string followd by a new line
 * @s: input string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
