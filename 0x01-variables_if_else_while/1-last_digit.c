#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point of program
 * Description: print the last digit of the number stored in the variable n
 * Return: Always 0
 */

int main(void)
{
	int n;
	int genvar;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	genvar = (n % 10);

	if (genvar > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, genvar);
	}
	if (genvar == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, genvar);
	}
	if ((genvar < 6) && (genvar != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, genvar);
	}
	return (0);
}
