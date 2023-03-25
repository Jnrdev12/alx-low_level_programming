#include<stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
}
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		str[i] = tolower(str[i]);
		putchar(str);
	}
	return (0);
}
