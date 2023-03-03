#include "main.h"
/**
 * swap_int - function that swap values of two integers
 * @a:first argument as variable pointer
 * @b:second argument as variable pointer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
