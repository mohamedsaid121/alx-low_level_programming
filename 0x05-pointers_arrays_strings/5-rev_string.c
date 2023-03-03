#include "main.h"
/**
 * rev_string - function reverse string
 * @s: argument(pointer) and return char value
 */
void rev_string(char *s)
{
	int pos = 0, start;
	int temp;

	while (*(s + pos) != '\0')
	{
		pos++;
	}
	pos -= 1;
	start = 0;
	while (pos > start)
	{
		temp = *(s + start);
		*(s + start) = *(s + pos);
		*(s + pos) = temp;
		start++;
		pos--;
	}
}
