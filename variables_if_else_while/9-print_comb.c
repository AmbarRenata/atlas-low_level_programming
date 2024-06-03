#include <stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n <= '8')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
