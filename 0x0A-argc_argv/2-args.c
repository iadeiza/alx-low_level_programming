#include <stdio.h>
#include "main.h"

/**
 * main - checks the main code
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
