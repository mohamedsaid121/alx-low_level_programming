#include "main.h"
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
