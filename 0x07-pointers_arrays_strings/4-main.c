#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * return: Always 0
 */

int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", t);
	return (0);
}
