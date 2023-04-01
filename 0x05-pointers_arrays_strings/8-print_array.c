#include<stdio.h>
#include "main.h"
/**
 * print_array - to print numbers in an array
 *
 * @a: variable name for array
 *
 * @n: number of elment for the array
 *
 * Return 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", *(a + i));
			break;
		}
		printf("%d, ", *(a + i));
	}
	printf("\n");
}

