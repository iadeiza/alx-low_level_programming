#include <stdio.h>
#include "main.h"

/**
 * _memset - memset function
 * @s: startof the string to change
 * @b: value to be replaced
 * @n: number of bytes to change
 * Return: changed pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	for (; n != 0; p++, n--)
		*p = b;
	return (s);
}
