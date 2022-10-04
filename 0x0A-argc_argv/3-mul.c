#include <stdio.h>
#include <stdlib.h>
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
	int mul = 1;

	if (argc < 2)
	{
		printf("Error\n");
			return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);

}
