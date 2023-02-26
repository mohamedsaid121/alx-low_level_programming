#include "main.h"
/**
 * print_alphabet - function that print alphabet in lowercase
 * it's only allowed to use _putchar function
 * Return: 0
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x < 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
