#include "main.h"
#include<stdio.h>
/**
 * swap_int - to switch the values fo a and b
 *
 * @a : parameter to be used
 * @b : parameter to be used
 * Return 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
