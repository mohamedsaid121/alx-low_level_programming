#include "main.h"
/**
 * print_rev - function to print string in reverse order
 * @s: argument pointer and char value
 */
void print_rev(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	while (count--)
	{
		_putchar(*(s + count));
	}
	_putchar('\n');
}
