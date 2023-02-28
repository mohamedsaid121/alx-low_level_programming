#include "main.h"
/**
 * print_diagonal - Function that print diagonal using char \
 * it's allowed only to use _putchar
 * @n: argument of type int
 */
void print_diagonal(int n)
{
	int i;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
