#include "main.h"

/**
 * swap_int - entry
 *
 * Description: Swap the values of 2 ints
 * @a: pointer
 * @b: pointer
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *b;
	*b = *a;
	*a = i;
}
