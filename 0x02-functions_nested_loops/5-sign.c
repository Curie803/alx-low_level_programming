#include "main.h"
/**
 * print_sign - returns the supposed sign
 * @value: the value to be evaluated
 * Return: 1 if postive 0 if not
 */

int print_sign(int value)
{
	if (value > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (value == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
