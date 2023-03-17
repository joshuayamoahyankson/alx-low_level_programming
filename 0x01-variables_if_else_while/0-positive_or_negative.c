#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/** 
 * main - Entry point of program
 * Description: Prints whether a number be positive, zero or negative
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ( n > 0)
	{
		printf("%d is postive\n", n);
	}
	if ( n == 0)
	{
		printf("%d is zero\n", n);
	}
	if ( n < 0 )
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
