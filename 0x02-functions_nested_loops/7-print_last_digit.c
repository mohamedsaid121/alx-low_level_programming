#include "main.h"
/**
 * print_last_digit - function to print last digit
 * Return: last digit
 * @n: argument of type int
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		x = -1 * (n % 10);
		_putchar(x + '0');
		return (x);
	}
	else
	{
		x = n % 10;
		_putchar(x + '0');
		return (x);
	}
}
