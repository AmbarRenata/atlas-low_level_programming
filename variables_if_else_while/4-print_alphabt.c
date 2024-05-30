#include <stdio.h>

/**
 * main - print the alphabet in lowercase, except q and e
 * Return: Always 0
 */

int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
