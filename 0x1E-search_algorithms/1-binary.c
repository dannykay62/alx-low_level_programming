#include "search_algos.h"

void print_arr(int *array, size_t i, size_t size);

/**
* binary_search - searches for a value in a sorted array of integers
* using the Binary search algorithm
* @array: pointer to the first element of the array to search in
* @size: value to search for
* Return: index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	size_t min = 0, max = size - 1, mid = 0;\

	if (array == NULL || value == 0)
		return (-1);

	print_arr(array, min, size);
	while (min < max)
	{
		mid = (min + max) / 2;
		if (array[mid] < value)
		{
			min = mid + 1;
			print_arr(array, min, max + 1);
		}
		else if (array[mid] > value)
		{
			max = mid - 1;
			print_arr(array, min, max + 1);
		}
		else
			return (array[mid]);
	}
	return (-1);
}

/**
* print_arr - prints all elements of an array
* @array:  pointer to the first element of the array to print
* @i: index init
* @size: size of the array
*/
void print_arr(int *array, size_t i, size_t size)
{
	printf("Searching array: ");
	while (i < size)
	{
		if (i + 1 == size)
			printf("%d ", array[i]);
		else
			printf("%d, ", array[i]);
		i++;
	}
	printf("\n");
}
