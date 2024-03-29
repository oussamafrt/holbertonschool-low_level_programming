#include "function_pointers.h"

/**
 * print_name - Prints a name using a provided function
 * @name: The name to be printed
 * @f: Pointer to the function that prints the name
 * Description: This function prints the provided name
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
