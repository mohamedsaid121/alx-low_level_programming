#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
		int n;
		int r;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		r = n % 10;
		if (r > 5)
		{
			printf("Last digit of n is %d and is greater than 5\n", r);
		}
		else if (r == 0)
		{
			printf("Last digit of n is %d and is 0\n", r);
		}
		else if (r < 6 && r != 0)
		{
			printf("Last digit of n is %d and is less than 6 and not 0\n", r);
		}
		return (0);
}
