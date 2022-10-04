#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: parameter for argument count.
 * @av:  parameter for argument vector.
 *
 * Return: pointer of an array of char
*/

char *argstostr(int ac, char **av)
{
	char *pout;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	pout = malloc((c + 1) * sizeof(char));

	if (pout == NULL)
	{
		free(pout);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			pout[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			pout[ia] = av[i][j];
	}
	pout[ia] = '\0';

	return (pout);
}
