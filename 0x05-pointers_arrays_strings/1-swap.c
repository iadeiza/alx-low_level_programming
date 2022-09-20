#include "main.h"

/**
 * swap_int - function to collects two integers
 * @*a: the first integer
 * @*b: the second integer
 * Return: Always 0
 */

void swap_int(int *x, int *y)
{
	int ter;

	ter = *x;
	*x = *y;
	*y = ter;
}
