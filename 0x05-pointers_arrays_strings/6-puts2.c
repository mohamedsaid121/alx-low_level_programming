#include "main.h"
/**
 * puts2 - function that print every other char
 * @str: argument pointer points to char value
 */
void puts2(char *str)
{
	int pos;

	for (pos = 0; *(str + pos) != '\0'; pos++)
	{
		if ((pos % 2) == 0)
			_putchar(*(str + pos));
	}
	_putchar('\n');
}
