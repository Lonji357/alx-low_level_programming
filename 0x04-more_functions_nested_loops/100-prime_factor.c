#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - finds largest prime factor
 *
 * Return: 0 (success)
 */

int main(void)
{
	long int n = 612852475143;
	long int largest_prime = 2;

	while (n != largest_prime)
	{
		if (n % largest_prime == 0)
		{
			n = n / largest_prime;
		}
		else
		{
			largest_prime++;
		}
	}
	printf("%ld\n", largest_prime);
	return (0);
}
