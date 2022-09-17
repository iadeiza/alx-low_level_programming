#include "main.h"

/**
 * _isupper - print uppercase, return 1 if uppercase and 0 if not uppercase
 * @c: charcter to check and compare
 * Return: Always 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else if ((c >= 'a') && (c <= 'z'))
	{
		return (0);
	}
}
