#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of ints
 * @array: array of ints
 * @size: size of array
 * @value: int to search
 * Return: value or -1
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid, val;

	if (!array)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (val = left; val <= right; val++)
		{
			printf("%d", array[val]);
			if (val < right)
				printf(", ");
		}
		printf("\n");

		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
