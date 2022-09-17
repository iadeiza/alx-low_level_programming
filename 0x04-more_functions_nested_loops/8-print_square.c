#include "main.h"
/**
 * print_square - prints the dimensio of the queen
 * @size: shoiwing number of
 * Return: Always
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; ++i)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
