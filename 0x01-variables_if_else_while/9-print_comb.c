#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 *
 * Return: always return 0
 *
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);

		if (x != '9')
			putchar(', ');
	}

	return (0);
}
