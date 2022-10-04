#include <stdio.h>
#include <stdlib.h>

/**
 * main - program multiplies two numbers
 * @argc: arguments counter
 * @argvL argument vector
 * Return: 0 for success
 */

int main(int argc, char **argv)
{

	int x, y, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		result = x * y;
		printf("%d\n", result);
		return (0);
	}
}
