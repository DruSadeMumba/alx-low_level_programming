#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of ints
 * @array: array of ints
 * @size: size of array
 * @value: int to search
 * Return: value or -1
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, low, high, mid, val;

	if (!array || !size)
		return (-1);
	while (bound < size && value >= array[bound])
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	low = bound / 2;
	high = bound < size ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (val = low; val <= high; val++)
		{
			printf("%d", array[val]);
			if (val < high)
				printf(", ");
		}
		printf("\n");

		if (value == array[mid])
			return ((int)mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
