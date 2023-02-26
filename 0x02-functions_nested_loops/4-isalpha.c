#include "main.h"
/**
 * _isalpha - function to check for alphabetic char
 * Return: 1 if c is letter
 * @c: argument of type int
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
