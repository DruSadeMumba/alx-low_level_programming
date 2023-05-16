#include "main.h"

/**
 * alloc_grid - pointer to a 2 dimensional array
 *
 * @width: int
 * @height: int
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(height * sizeof(int *));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			free(s);
			for (j = 0; j <= i; j++)
				free(s[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}
	return (s);
}
