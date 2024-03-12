#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Entry point
 *
 * @s1 : character to print
 * @s2 : character to print
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int taille;
	unsigned int size;

	if (s1 == 0)
		return (NULL);

	while (s1[size] != '\0')
	{
		size++;
	}

	while (s2[taille] != '\0')
	{
		taille++;
	}

	result = malloc(sizeof(char) * (size + taille + 1));

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);

	strcat(result, s2);

	return result;
}
