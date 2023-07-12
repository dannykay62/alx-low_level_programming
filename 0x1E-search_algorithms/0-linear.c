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
	if (array == NULL)
	{
		return (-1);
	}
	for (size_t n = 0; n < size; n++)
	{
		if (array[n] == value)
		{
			return (n);
		}
		printf("Value checked array[%d] = %d\n", array[n], value);
	}
	return (-1);
}
