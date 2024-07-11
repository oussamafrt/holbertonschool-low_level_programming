#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Entry point
 * @size : character to print
 * @nmemb : character to print
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *result;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);
	for (i = 0 ; i < nmemb * size ; i++)
		result[i] = 0;
	return (result);
}
