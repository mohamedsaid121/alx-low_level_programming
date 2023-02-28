#include "main.h"
#include <stdio.h>
/**
 * fizz_buzz - function that print numbers from 1 to 100 with certain condition
 * condition 1:For multiples of three print Fizz instead of the number
 * condition 2:For the multiples of five print Buzz
 * condition 3:For numbers which are multiples of both 3 and 5 print FizzBuzz.
 * Return: 0
 */
int fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0 && (i % 3) != 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3) != 0 && (i % 5) != 0)
		{
			printf("Fizz Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
