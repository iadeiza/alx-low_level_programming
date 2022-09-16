#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - checks numbersand print if positive or negative
 *
 * Return - Always 0
 */

void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive", i);
	}
	else if (i < 0)
	{
		printf("%d is negative", i);
	}
	else
	{
		printf("%d is zero", i);
	}

}
