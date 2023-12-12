#include "search_algos.h"

/**
 * advanced_binary_recursive - searches for a value in a sorted array of ints
 * @array: array of ints
 * @low: lowest index
 * @high: highest index
 * @value: int to search
 * Return: index or -1
*/
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t val;

	if (low > high)
		return (-1);

	printf("Searching in array: %d", array[low]);
	for (val = low + 1; val <= high; val++)
		printf(", %d", array[val]);
	printf("\n");

	val = low + (high - low) / 2;

	if ((val == 0 || array[val - 1] < value) && array[val] == value)
		return ((int)val);

	if (value > array[val])
		return (advanced_binary_recursive(array, val + 1, high, value));

	return (advanced_binary_recursive(array, low, val, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of ints
 * @array: array of ints
 * @size: size of array
 * @value: int to search
 * Return: value or -1
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
