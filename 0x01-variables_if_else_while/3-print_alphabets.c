#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char c  = 'a';
	char C = 'A';

	while (c <= 'z')
{
	putchar(c++);
	}
	while (C <= 'Z')
{
	putchar(C++);
	}
	putchar('\n');
	return (0);
}
