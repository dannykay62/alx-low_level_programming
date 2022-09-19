#include <stdio.h>

/**
 * swap_int - function swaps the value of two integers
 * @a: input integer pointer
 * @b: input integer pointer
 * Return: nothing
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
