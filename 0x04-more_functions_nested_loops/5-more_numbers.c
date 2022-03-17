#include "n.h"

/**
 * more_numbers - print all numbers 0 through 14 ten tiems
 */

void more_numbers(void)
{
	int j;
	int k;
for (x = 0; x < 10; x++)
	{
	for (j = 0; j <= 14; j++)
	{
	if (j > 9)
	_putchar((j / 10) + '0');
	_putchar((j % 10) + '0');
	}
	_putchar('\n');
	}
}
