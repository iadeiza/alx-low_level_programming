#include "main.h"

/**
 * _isdigit - checks if input is a digit, return 1 and 0
 * @c: character that checks
 * Return: Always 0
 */

int _isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
