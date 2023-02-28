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
			for (mar = 0; mar < (space - 1); mar++)
			{
				_putchar(32);
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

