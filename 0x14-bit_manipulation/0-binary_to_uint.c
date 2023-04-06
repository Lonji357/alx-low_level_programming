#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - converts the binary number to unsigned int.
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number, or 0 if b is NULL or contains non-binary chars.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0, dec = 0;

	if (b == NULL)
		return (0);

	while (b[a])
	{
		if (!(b[a] == '0' || b[a] == '1'))
			return (0);
		dec <<= 1;
		if (b[a] == '1')
			dec += 1;
		a++;
	}

	return (dec);
}
