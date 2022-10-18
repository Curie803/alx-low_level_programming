#include "maion.h"
/**
 * print_last_digit - prints last digits
 * @value: a given value
 * Return: 0 always
 */

int print_last_digit(int value)
{
	int remain = value % 10;

	if (remain < 0)
	{
		remain = -(remain);
		_putchar(reamin + '0');
		return (remain);
	}
	else
	{
		_putchar(remain + '0');
		return (remain);
	}
	return (0);
}

