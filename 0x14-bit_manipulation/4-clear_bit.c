#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 *
 * @n: address of n.
 * @index: position
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 64)
		return (-1);

	mask <<= index; /* shift 1 to the index-th bit */
	mask = ~mask; /* invert mask to get 0 at index-th bit */

	*n &= mask; /* AND n with the mask to set index-th bit to 0 */

	return (1);
}
