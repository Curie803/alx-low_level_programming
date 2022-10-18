#inlude "main.h"

/**
 * main - prints putchar
 * 
 * Description: prints putchar
 *
 * Return: 0 always
 */

int main(void)
{
	chartext[9] = "_putchar";
	int i = 0;

	for(i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');


	return(0);
}
