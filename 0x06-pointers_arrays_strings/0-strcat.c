#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: A pointer to a character that will be changed
 * @scr: A pointer to a character that will be changed
 * Return: dest
 */

char *_strcat(char *dest, char *src)
	int i;
	int j;

	i = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{

	}


	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
