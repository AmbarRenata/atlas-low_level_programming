#include <stdio.h>

/**
 * main - print all sinlge digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
