#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: always return 0 success
 */

int main(int argc, char *argv)
{
	int i;
	int counter = 0;

	if (argc > 0)
	{
		for (i = 0; i <= argc; i++)
		{
			counter++;
		}
	}
	printf("%d\n", counter);
	return (0);
}
