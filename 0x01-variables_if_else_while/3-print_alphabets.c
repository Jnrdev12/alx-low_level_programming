#include<stdio.h>
/**
 * main - Entry point
 * Description - to print lower and upper case alphabet
 * Return - Always 0
 */
int main(void)
{
	int n = 97;
	int d = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	while (d <= 90)
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
