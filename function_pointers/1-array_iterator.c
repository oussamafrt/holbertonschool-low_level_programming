#include "function_pointers.h"

/**
 * array_iterator - Applies a function to each elemnt of an arrat
 * @array: The array to apply the function
 * @size: yhe size of the array
 * @action: A pointer to the function to use
 * Description: This function iterates over each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(action)(array[i]);
	}
}
