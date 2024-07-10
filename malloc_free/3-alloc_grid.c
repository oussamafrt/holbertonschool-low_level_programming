#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Entry point
 * @width: character to print
 * @height: character to print
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **tableau;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	tableau = malloc(height * sizeof(int *));
	if (tableau == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		tableau[i] = malloc(width * sizeof(int));
		if (tableau[i] == NULL)
		{
			for ( ; i >= 0 ; i--)
			{
				free(tableau[i]);
			}
			free(tableau);
		}
		for (j = 0 ; j < width ; j++)
		{
			tableau[i][j] = 0;
		}
	}
	return (tableau);
}
