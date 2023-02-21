#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @num: the input integer
 *
 * Return: the absolute value of the input integer
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}

}
