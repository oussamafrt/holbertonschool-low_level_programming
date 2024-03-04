#include "main.h"
#include <stdio.h>

/**
 * _memset - Entry point
 * @s: character to print
 * @b: character to print
 * @n: character to print
 *
 * Return: Nothing.
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (0);
}
