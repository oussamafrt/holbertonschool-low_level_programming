#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Entry point
 * @s1: character to print
 * @s2: character to print
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i, c;
	char *result;
	unsigned int taille = 0;
	unsigned int size = 0;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
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
	{
		return (NULL);
	}
	for (i = 0 ; s1[i] != '\0'; i++)
	{
		result[i] = s1[i];
	}
	for (c = 0 ; s2[c] != '\0' ; c++)
	{
		result[i + c] = s2[c];
	}
	return (result);
}
