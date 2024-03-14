#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Entry point
 * @s1 : character to print
 * @s2 : character to print
 * @n : character to print
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, c;
	char *result;
	unsigned int taille = 0;
	unsigned int size = 0;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	while (s1[size] != '\0')
		size++;
	while (s2[taille] != '\0')
		taille++;
	if (n >= taille)
		n = taille;
	result = malloc(sizeof(char) * (size + n + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0'; i++)
		result[i] = s1[i];
	for (c = 0 ; c < n ; c++)
		result[i + c] = s2[c];
	result[size + n] = '\0';
	return (result);
}
