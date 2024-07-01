#include "main.h"
#include <stdio.h>
/**
 * *_strchr - Entry point.
 * @c: character to be print
 * @s: character to be print
 * Return: Always 0;
 */
char *_strchr(char *s, char c)
{
	unsigned int index = 0;

	while (s[index] >= '\0')
	{
		if (s[index] == c)
		{
			return (s + index);
		}
		index++;
	}
	return (NULL);
}
