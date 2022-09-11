#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entrypoint
 *
 * Return: Always 0 (success)
 *
 */

char main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
