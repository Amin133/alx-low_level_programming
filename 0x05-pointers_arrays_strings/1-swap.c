#include "main.h"

/**
 * swap_int - swap the value of two integer
 * @a: integer
 * @b: integer
 * Return: Always 0 (success)
 */
void swap_int(int *a, int *b, a, b);
{
	int *a;
	int *b;

	a = 58;
	b = 48;

	int *a = &b;
	int *b = &a;
	printf("a=%d, b=%d\n", a, b);

	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
