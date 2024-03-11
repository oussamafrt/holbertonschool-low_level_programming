#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 *
 * @str : character to print
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i;

	if (str == 0)
		return (NULL);

	s = malloc(sizeof(char) * (size + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
