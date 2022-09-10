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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2 ;

	if ((n % 10) > 5)
	{	
	printf("Last digit of %d is %d and is greater than %d\n", n,  n % 10, 5);
	}
	else if ((n % 10) == 0)
	{
	printf("Last digit of %d is %d and is %d\n", n, n % 10, 0);
	}
	else if (n % 10 < 6)
	{
	printf("Last digit of %d is %d and is less than %d and not 0\n", n, n % 10, 6);		
	}
	

  return (0);	

}
