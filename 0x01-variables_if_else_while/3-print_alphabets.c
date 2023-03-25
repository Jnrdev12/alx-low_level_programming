#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
	while (d <= 90)
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
