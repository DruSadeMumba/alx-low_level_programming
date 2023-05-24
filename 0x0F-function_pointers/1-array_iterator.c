#include "function_pointers.h"

/**
 * array_iterator - exacute function given as a param
 *
 * @array: pointer to array
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	while (*array)
		size++;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
