#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int length, half;

	for (length = 0, str[length] != '\0');
			length++;


	half = (length + 1) / 2;

	while (half < length)
	{
		_putchar(str[half]);
		half++;
	}

	_putchar('\n');

}
