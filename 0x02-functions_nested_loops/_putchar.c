#include <unistd.h>
/**
 * _putchar - writes the character
 * @c: The character to print
 *
 * Return: 1 on sucess
 * On erro, -1 is returned, and error is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
