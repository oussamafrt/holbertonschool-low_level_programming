#include "main.h"
#include <stdio.h>
/**
 * *_strcat - Entry point
 * @dest: character to print
 * @src: character to print
 * Return: Always 0;
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int index2 = 0;

	while (dest[index] != '\0')
	{
		index++;
	}
	for (index2 = 0; src[index2] != '\0'; index2++)
	{
		dest[index] = src[index2];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
