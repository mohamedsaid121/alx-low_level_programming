#include "main.h"
/**
 * main - function return _putchar word
 * it's allowed to use putchar function only
 * Return: always 0
 */
int main(void)
{
	char arr[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(arr[i]);
	}
	_putchar('\n');
	return (0);
}
