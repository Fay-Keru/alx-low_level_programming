#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - A function to find random number
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	p = n % 10;

	if (p > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, p);
	}
	if (p == 0)
	{
		printf("Last digit of %d is %d and 0\n", n, p);
	}
	if (p < 6 && p != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, p);
	}
	return (0);
}
