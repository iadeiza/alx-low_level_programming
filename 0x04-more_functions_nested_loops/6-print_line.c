#include "main.h"

/**
 * print_line - print lines n times
 * @n: number of times to print n
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}


}
