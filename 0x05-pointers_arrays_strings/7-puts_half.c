#include "main.h"
/**
 * puts_half - function print second half of a string
 * @str: pointer parameter points to char value
 */
void puts_half(char *str)
{
	int med;
	int len = _strlen(str);

	if ((len % 2) != 0)
	{
		med = ((len + 1) / 2) + 1;
		while (*(str + med) != '\0')
		{
			_putchar(*(str + med));
			med++;
		}
	}
	else
	{
		med = (len / 2) + 1;
		while (*(str + med) != '\0')
		{
			_putchar(*(str + med));
			med++;
		}
	}
	_putchar('\n');
}
/**
 * _strlen - function that get length of a string
 * @s: argument (pointer) and points to char value
 * Return: length of char
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
