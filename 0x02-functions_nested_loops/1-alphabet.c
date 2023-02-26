#include "main.h"
/**
 * main - function that print alphabet in lowercase
 * it's only allowed to use _putchar function
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x < 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	return (0);
}
