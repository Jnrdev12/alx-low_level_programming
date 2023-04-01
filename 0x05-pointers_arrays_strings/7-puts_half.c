#include<stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - to print half of a string
 *
 * @s:  variable to be used
 *
 * Return 0
 */
void puts_half(char *s)
{
	int len = strlen(s);

	if (len % 2 == 0)
	{
		int n = len / 2;
		int i = n;

		for (; i < len; i++)
		{
			printf("%c", *(s + i));
		}
		putchar('\n');
	}
	else if (len % 2 == 1)
	{
		int n = ((len - 1) / 2);
		int i = n;

		for (; i < len; i++)
		{
			printf("%c", *(s + i));
		}
		putchar('\n');
	}
}
