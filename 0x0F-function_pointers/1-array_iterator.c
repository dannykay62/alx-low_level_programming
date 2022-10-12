i#include <stdlib.h>

/**
 * array_iterator - function executes another funtion that is
 * given as parameter on each element of the array
 * @array: the pointer to the array
 * @size: size of array
 * @action: function action  to iterate through the array
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int = 0;

	if (action == NULL || array == NULL)
		return;
	for (; i < size; i++)
		action(array[i]);
}
