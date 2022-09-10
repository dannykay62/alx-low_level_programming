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
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
