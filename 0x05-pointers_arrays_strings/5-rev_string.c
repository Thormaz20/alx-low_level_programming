#include "main.h"
#include <string.h>

/**
 * rev_string - reverse the string in the reversed order.
 * @s: input declared.
 * Return: no returns.
*/

void rev_string(char *s)
{
	char m;
	int i, l;

	l = strlen(s);
	for (i = 0; i < l / 2; i++)
	{
		m = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = m;
	}
}
