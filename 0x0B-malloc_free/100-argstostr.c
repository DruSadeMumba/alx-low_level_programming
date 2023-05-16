#include "main.h"

/**
 * argstostr -  concatenates all the arguments
 *
 * @ac: int
 * @av: vector
 *
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *arg;
	int i, j, k, l;

	k = l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			l++;
		}
		l++;
	}
	
	arg = malloc((l + 1) * sizeof(char));
	
	if (arg == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arg[k] = av[i][j];
			k++;
		}
		arg[k] = '\n';
		k++;
	}
	
	arg[k] = '\0';
	return (arg);
}
