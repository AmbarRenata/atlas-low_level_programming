#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;
	char m;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
	putchar('\n');

	return (0);
}
