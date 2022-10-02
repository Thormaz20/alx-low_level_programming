#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: char var
 * @s2: char var
 * Return: 0 if correct && -15 if wrong
*/

int _strcmp(char *s1, char *s2)
{
	int main, i;

	main = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (main == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
