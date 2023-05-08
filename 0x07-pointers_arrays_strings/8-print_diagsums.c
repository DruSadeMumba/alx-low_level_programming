#include "main.h"

/**
 * print_diagsums - print the sum of the two diagonals of square matrix
 *
 * @a: array
 * @size: array size
 */
void print_diagsums(int *a, int size)
{
	int i, sum, sum2;

	sum = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum2 += a[(size * i) + (size - i - 1)];
	}
	printf("%d, %d\n", sum, sum2);
}
