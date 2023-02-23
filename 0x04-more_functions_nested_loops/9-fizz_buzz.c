#include <stdio.h>
#include "main.h"

/**
 * main - print 0 to 100, followed by new line
 * for mult of 3 Fizz
 * for mult of 5 Buzz
 * mult of 3 and 5 FizzBuzz
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
