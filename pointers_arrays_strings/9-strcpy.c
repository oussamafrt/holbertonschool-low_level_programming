#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - Entry point
 * @dest: character to print
 * @src: character to print
 * Return: Always 0;
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
