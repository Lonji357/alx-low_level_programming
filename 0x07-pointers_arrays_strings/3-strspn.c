#include "main.h"

/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (len);
		}
	}
	return (len);
}
