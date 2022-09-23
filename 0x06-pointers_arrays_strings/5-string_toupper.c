#include "main.h"

/**
 * string_toupper - convert elements of a string to upper caps
 * @str: string to be changed
 * Return: changed string
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
