#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char A = 'A';

	for (A < 'Z', A++)
	{
		for (a < 'z', a++)
		{
			putchar(a);
		}
		putchar(A);
	}
	putchar('\n');
	return (0);
}
