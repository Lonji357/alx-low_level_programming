#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long integer to be converted to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((n >> 1) >= mask)
	{
		mask <<= 1;
	}

	while (mask != 0)
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}

		mask >>= 1;
	}
}
