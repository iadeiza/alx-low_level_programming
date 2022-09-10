#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int n, num1, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2 ;

	digit = n % 10;

	if ( digit > 5)
	{	
	printf("Last digit of %d is %d and is greater than %d\n", n, digit, 5);
	}
	else if (digit == 0)
	{
	printf("Last digit of %d is %d and is %d\n", n, digit, 0);
	}
	else if (digit < 6)
	{
	printf("Last digit of %d is %d and is less than %d and not 0\n", n, digit, 6);		
	}
	

  return (0);	

}
