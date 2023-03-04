#include "main.h"
/**
 * puts_half - function print second half of a string
 * @str: pointer parameter points to char value
 */
void puts_half(char *str)
{
	int med;

	if ((_strlen(str) % 2) != 0)
	{
		med = ((_strlen(str) + 1) / 2) + 1;
		while (*(str + med) != '\0')
		{
			_putchar(*(str + med));
			med++;
		}
	}
	else
	{
		med = (_strlen(str) / 2) + 1;
		while (*(str + med) != '\0')
		{
			_putchar(*(str + med));
			med++;
		}
	}
	_putchar('\n');
}
