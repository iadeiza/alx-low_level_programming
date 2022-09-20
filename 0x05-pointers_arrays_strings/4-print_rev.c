#include "main.h"

/**
 * print_rev - Print characters in reverse order
 * @s: character to be printed
 * Return: Always 0
 */

void print_rev(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	for (j = j - 1; j >= 0; j--)
	{
		_putchar (s[j]);
	}
	_putchar ('\n');
}
