#include "main.h"

/**
 * print_triangles - print triangles based on size
 * @size: number of size
 * Return: Always 0
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 0; x < size; ++x)
		{
			for (z = (size - 1); z > x; --z)
			{
				_putchar(' ');
			}
			for (y = 0; y <= x; ++y)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
