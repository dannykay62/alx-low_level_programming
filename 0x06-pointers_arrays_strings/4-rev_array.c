#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - function reverse an array
 * @a: first input array
 * @n: second input array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n--)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n] = temp;
	}
}
