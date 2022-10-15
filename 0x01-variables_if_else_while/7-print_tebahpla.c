#include <stdio.h>

/**
 * main - prints numberz
 * Return: 0 alwaya
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
