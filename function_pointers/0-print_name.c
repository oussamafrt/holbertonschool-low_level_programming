#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Prints a name using a provided function
 * @name: The name to be printed
 * @f: Pointer to the function that prints the name
 *
 * Description: This function prints the provided name using the provided
 * printing function. The printing function must accept a character pointer
 * as its only parameter.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
