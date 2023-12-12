#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of ints
 * @array: array of ints
 * @size: size of array
 * @value: int to search
 * Return: value or -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), prev = 0, val;

	if (!array)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (prev < size && array[prev] < value)
	{
		prev += jump;
		if (prev < size && array[prev] < value)
			printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev - jump, prev);

	for (val = prev - jump; val <= prev && val < size; val++)
	{
		printf("Value checked array[%lu] = [%d]\n", val, array[val]);
		if (value == array[val])
			return ((int)val);
	}
	return (-1);
}
