#include <stdio.h>

/**
 * print_alphabet - print alphabet of letters
 *
 * Return: void
 */

int main(void)
{
	char ch = 'a';

	while(ch <= 'z')
	{
		printf("%c ", ch);
		ch++;
	}

	return (0);
}
