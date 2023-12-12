#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of ints
 * @array: array of ints
 * @size: size of array
 * @value: int to search
 * Return: value or -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array)
		return (-1);

	while (size)
	{
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%lu] ", pos);
		if (pos >= size)
		{
			printf("is out of range\n");
			break;
		}
		else
			printf("= [%d]\n", array[pos]);

		if (value == array[pos])
			return ((int)pos);
		if (value > array[pos])
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
