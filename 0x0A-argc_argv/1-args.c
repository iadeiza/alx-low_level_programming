#include <stdio.h>
#include "main.h"

/**
 * main - checks the code
 * @argc: variable that holds the count of argument
 * @argv: array containing strings of argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
