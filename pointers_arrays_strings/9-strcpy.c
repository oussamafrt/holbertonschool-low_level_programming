#include "main.h"

/**
 * _strcpy - Entry point
 *
 * @dest: character to print
 * @src: character to print
 *
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
