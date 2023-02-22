#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all possible combinations of single-digit numbers.
 * you can only use putchar and only max four times.
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
