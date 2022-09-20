#include "main.h"

/**
 * _strcpy - coy the content of a string
 * @dest: a pointer to the char that will be changed
 * @src: a pointer to the char that will be chnaged
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
