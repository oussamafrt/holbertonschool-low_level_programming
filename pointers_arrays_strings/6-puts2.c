#include "main.h"

/** puts2 - Entry point 
 *
 * @str: character to be print
 * @l: character to be print
 *
 * return: Always 0
 */

void puts2(char *str)
{
	int l;

	l = 0;

	for (l = 0 ; str[l] != '\0' ; l++)
	{
		if (l % 2 == 0)
			_putchar (str[l]);
	}
	_putchar ('\n');
}
