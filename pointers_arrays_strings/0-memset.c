#include "main.h"
#include <stdio.h>
/**
 * *_memset - Entry point.
 * @s: character to be print
 * @b: character to be print
 * @n: character to be print
 * Return: Always 0;
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
