#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Entry point
 * @s1: character to be printed
 * @s2: character to be printed
 * Return: Nothing.
*/
char *str_concat(char *s1, char *s2)
{
	int index1 = 0;
	int index2 = 0;
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	result = malloc(sizeof(char) * (size1 + size2 + 1));

	if (result == NULL)
		return (NULL);

	for (index1 = 0; s1[index1] != '\0'; index1++)
	{
		result[index1] = s1[index1];
	}

	for (index2 = 0; s2[index2] != '\0'; index2++)
	{
		result[index1 + index2] = s2[index2];
	}
	result[index1 + index2] = '\0';

	return (result);
}
