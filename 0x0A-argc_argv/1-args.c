#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of the arguments passed into it.
 * @argc: has the length of the arguments
 * @argv: has the arguments
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	if (**argv != '\0')
	printf("%d\n", argc - 1);

	return (0);
}
