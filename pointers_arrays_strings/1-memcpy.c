#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: character to print
 * @src: character to print
 * @n: character to print
 *
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
