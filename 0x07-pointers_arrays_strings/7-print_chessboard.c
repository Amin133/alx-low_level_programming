#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function that prints the chessboard
 * @a: chessboard
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i, j = 0, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[j];
		j += size + 1;
	}

		j = 0;

		j = size - 1;

	for (i = 0; i < size; i++)
	{
		sum2 += a[j];
		j += size - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}
