#include "main.h"

/**
 * puts2 - function that prints half a string
 * @str: charcter to be printed
 * Return: Always 0
 */

void puts2(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		if (b % 2 == 0)
		_putchar (str[b]);
	}
	_putchar ('\n');
}
