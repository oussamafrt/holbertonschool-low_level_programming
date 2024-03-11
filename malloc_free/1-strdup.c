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
	unsigned int size;

	if (str == 0)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}

	s = malloc(sizeof(char) * (size + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
