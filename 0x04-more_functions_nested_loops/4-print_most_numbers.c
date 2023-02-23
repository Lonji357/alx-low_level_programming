#include "main.h"

/**
 * print_most_numbers - print 0 tp 9 but 2 and 4
 *
 * Return: 0 (success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
