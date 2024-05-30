#include <stdio.h>

/**
 * main - print the lowercase alphabet in reverse
 * Return: Always 0
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a';)
	{
	putchar(a);
	a--;
	}
putchar('\n');
return (0);
}
