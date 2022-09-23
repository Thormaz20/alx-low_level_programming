#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @c: char var
 * Return: c
*/

char *leet(char *c)
{
	int a, b, rep[] =  {'4', '3', '0', '7', '1'};
	int letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L' };

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (c[a] == letters[b])
			{
				c[a] = rep[b / 2];
				b = 9;
			}
		}
	}
	return (c);
}
