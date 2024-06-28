#include "main.h"
#include <stdio.h>
/**
 * *_strncat - Entry point
 * @dest: character to print
 * @src: character to print
 * @n: character to print
 * Return: Always 0;
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int index2 = 0;

	while (dest[index] != '\0')
	{
		index++;
	}
	while (index2 < n && src[index2] != '\0')
	{
		dest[index] = src[index2];
		index++;
		index2++;
	}

	dest[index] = '\0';
	return (dest);
}
