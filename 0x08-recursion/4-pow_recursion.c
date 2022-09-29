#include "daniel.h"

/**
 * _pow_recursion - function that returns the value
 * of x raised to the power of y
 * @x: input string
 * @y: input string power
 * Return: result of the power
 */

int _pow_recursion(int x, int y)
{
	if (x < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
