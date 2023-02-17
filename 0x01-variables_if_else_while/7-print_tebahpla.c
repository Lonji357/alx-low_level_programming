#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char c = 'z';

	for (c >= 'a')
	{
	putchar(c--);
	}
	putchar("\n");
	return (0);
}
