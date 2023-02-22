#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	char A;

	for (A = 'A', A < 'Z', A++;)
	{
		for (a = 'a', a < 'z', a++;)
		{
			putchar(a);
		}
		putchar(A);
	}
	putchar('\n');
	return (0);
}
