#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
