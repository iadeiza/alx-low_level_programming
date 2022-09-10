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
	printf("Last digit of %d is %d and is greater than %d\n", n, n%10, 5);
	}
	if ((n % 10) == 0)
	{
	printf("Last digit of %d is %d and is %d\n", n, n%10, 0);
	}
	if (n < 0 && n % 10 < 6 && n % 10 != 0)
	{
	printf("Last digit of %d is %d and is less than %d and not %d\n",		n, n%10, 6, 0);		
	}
	if (n > 0 && n % 10 < 6 && n % 10 != 0)
	printf("Last digit of %d is %d and is less than %d and not %d\n", 		n, n%10, 6, 0);
	

  return (0);	

}
