#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: always return 0
 *
 */

int main(void)
{
	int x;
	char m;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (m = 'a'; m <= 'f'; m++)
		putchar(m);
	putchar('\n');

	return (0);
}
