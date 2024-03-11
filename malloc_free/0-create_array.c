#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 *
 * @size : character to print
 * @c : character to print
 *
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
	{
		s[i] = c;
	}
	return (s);
}
