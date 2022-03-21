#include "main.h"

/**
 * puts_half - prints every other characterof a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int a, b, max;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	max = a;
	b= max / 2;
	while (b<= max)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
