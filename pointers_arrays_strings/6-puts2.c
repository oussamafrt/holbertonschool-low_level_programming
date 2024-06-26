#include "main.h"
/**
 * puts2 - check the code
 * @str: variable to be verified
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
		index++;
	}
	_putchar('\n');
}
