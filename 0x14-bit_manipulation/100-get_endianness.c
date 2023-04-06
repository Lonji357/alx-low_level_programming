#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int p = 1;
	char *c = (char *)&p;

	if (*c)
		return (1);
	else
		return (0);
}
