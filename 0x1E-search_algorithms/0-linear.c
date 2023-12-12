#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of ints
 * @array: array of ints
 * @size: size of array
 * @value: int to search
 * Return: value or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t val;

	if (!array)
		return (-1);
	for (val = 0; val < size; val++)
	{
		printf("Value checked array[%lu] = [%d]\n", val, array[val]);
		if (value == array[val])
			return ((int)val);
	}
	return (-1);
}
