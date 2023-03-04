#include "main.h"
/**
 *  *_strcpy - function that copy str from location to another location
 * @dest: first argument points to char value
 * @src: second argument points to char value
 * Return: value of dest
 */
char  *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (*(src + count) != '\0')
	{
		*(dest + count) = *(src + count);
		count++;
	}
	*(dest + inc) = '\0';
	return (dest);
}
