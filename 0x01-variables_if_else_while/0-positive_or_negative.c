#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 * Description - code to check whether a random  nu,ber is positive or negative
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive ", n);
	}
	else if (n < 0)
	{
		printf("%d is negative ", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}
