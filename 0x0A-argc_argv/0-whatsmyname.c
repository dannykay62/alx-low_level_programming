#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: arguments count
 * @argv: argumrnts vector
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	if (argv > 0)
		printf("%s\n", argv[0]);

	return (0);
}
