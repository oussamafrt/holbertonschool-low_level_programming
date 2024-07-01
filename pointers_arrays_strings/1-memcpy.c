#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - Entry point.
 * @dest: character to be print
 * @src: character to be print
 * @n: character to be print
 * Return: Always 0;
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
