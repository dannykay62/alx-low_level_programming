#include <stdlib.h>

/**
 * int_index - function searches for an integer
 * @array: pointer to array
 * @size: size of the array
 * @cmp: function cmp to compare the elements through the array
 * Return: index of the first element, cmp does not return 0,
 * -1 if no element match or size <= 0;
 */

nt int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);
	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);
	if (i == size)
		return (-1);

	return (-1);
}
