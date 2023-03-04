#include "main.h"
#include <stdio.h>
/**
 *  print_array - function print elements of arr
 *  @a: argument pointer points to int value
 *  @n: second argument of type int
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
