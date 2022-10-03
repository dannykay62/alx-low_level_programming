#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
