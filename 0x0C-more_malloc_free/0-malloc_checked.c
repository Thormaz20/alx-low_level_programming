#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - function that allocates memory using malloc
 * @b: Unsigned int var
 * Return: no return value
*/
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
