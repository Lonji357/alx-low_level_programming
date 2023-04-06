#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @a: number.
 * @i: index of bit to return.
 * Return: value of the bit index or -1 if error.
 */
int get_bit(unsigned long int a, unsigned int i)
{
	/* check if index is out of range */
	if (i > 64)
		return (-1);

	/* shift number right by index bits to get bit at index */
	a = a >> i;

	/* if bit at index is 1, return 1, else return 0 */
	if ((a & 1) != 0)
		return (1);
	else
		return (0);
}
