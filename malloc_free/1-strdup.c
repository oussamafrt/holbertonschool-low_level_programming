#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Entry point
 * @str: character to be printed
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int size;
	char *string;

	if (str == 0)
		return (NULL);

	while (str[size] != '\0')
		size++;

	string = malloc(sizeof(char) * (size + 1));

	if (string == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		string[i] = str[i];
	}
	string[size] = '\0';

	return (string);
}
