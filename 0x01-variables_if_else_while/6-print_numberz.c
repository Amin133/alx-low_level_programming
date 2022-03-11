#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 68;

	while (i < 78)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
