#include <stdio.h>

/**
 * main - prints alphabet
 * Return: 0 always
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	return (0);
}
