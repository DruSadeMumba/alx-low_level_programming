#include "function_pointers.h"

/**
 * int_index - search for int
 *
 * @array: array of ints
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: array[0] on success -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		if (size > 0)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
					return (i);
			}
		}
	}
	return (-1);
}
