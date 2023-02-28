#include "main.h"
/**
 * print_triangle - function to print triangle using char #
 * @size: argument of type int
 */
void print_triangle(int size)
{
	int i, mar, space, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		space = size - 1;
		for (i = 0; i < size; i++)
		{
			mar = 0;
			while (mar < (space - i))
			{
				_putchar(32);
				mar++;
			}

			j = size - mar;

			while (j > 0)
			{
				_putchar('#');
				j--;
			}
			_putchar('\n');
		}
	}
}

