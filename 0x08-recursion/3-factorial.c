#include "daniel.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: input string
 * Return: factorial of the given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
