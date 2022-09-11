#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - startpoint
 *
 * description: prints alphabets
 *
 * return: always 0
 */


char main(void)
{
	char i;

	for	(i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
return (0);
}
