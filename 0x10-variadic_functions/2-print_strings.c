#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings -  function that prints strings on a new line
 * @separator: the string to be printed
 * @n: number of string passed
 * @...: unknown inputs
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *s;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
		printf("\n");
}
