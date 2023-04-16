#include "search_algos.h"

/**
* linear_search - searches for a value in an array of integers
* using the Linear search algorithm
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: the first index where value is located or -1 if value
* is not present in array or NULL
*/
int linear_search(int *array, size_t size, int value)
{
	size_t n = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (; n < size; n++)
	{
		printf("The value checked array[%lu] = [%d]\n", n, array[n]);
		if (array[n] == value)
			return (n);
	}
	return (-1);
}
