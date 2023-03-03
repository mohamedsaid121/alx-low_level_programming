#include "main.h"
/**
 * _puts - function that print string
 * @str: argument(pointer) that points to char value
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
