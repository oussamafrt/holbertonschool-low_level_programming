#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Entry point
 * @c: character to print
 * @s: character to print
 *
 * Return: Nothing.
 */

char *_strchr(char *s, char c)
{
	int i;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
