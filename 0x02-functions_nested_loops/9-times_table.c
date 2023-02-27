#include "main.h"
/**
 * times_table - function to print nine time tables
 * Return: 0
 */
void times_table(void)
{
	int i, j, m;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			m = i * j;

			if (m <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((m / 10) + '0');
			}
			_putchar((m % 10) + '0');

		}
		_putchar('\n');
	}
}
