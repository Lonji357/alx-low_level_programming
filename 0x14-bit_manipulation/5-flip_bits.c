#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 *
 * @n: first number.
 * @m: second number.
 * Return: number of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int counter = 0;

	for (; i > 0; counter++)
		i &= (i - 1);

	return (counter);
}
