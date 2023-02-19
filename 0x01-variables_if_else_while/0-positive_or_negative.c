#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - A function that checks whether a number is posive or negative
 *Return: 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
	printf("n is negative");
	}
	else if (n > 0)
	{
	printf("n is positive");
	}
	else
	{
	printf("n is zero");

	}
	return (0);
}
