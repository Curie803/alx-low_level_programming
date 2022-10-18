#include "main.h"
/**
 * _islower - prints lowercase
 * @alpha: prionts alphabet
 * Return: 0 always
 */

int _islower(int alpha)
{
	if (alpha >= 'a' && alpha <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
