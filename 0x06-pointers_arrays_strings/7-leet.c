#include "main.h"

/**
 * leet -  function that encodes a string into 1337..
 * @a: is a pointer type char
 * Return: Always 0.
 *
 */
char *leet(char *a)
{
	char leet[] = "aAeEoOtTlL";
	char chan[] = "4433007711";
	int j, k;

	for (j = 0; a[j] != '\0'; j++)
	{

		for (j = 0; leet[j] != '\0'; j++)
	{
		if (a[j] == leet[k])
		a[j] = chan[k];
	}

	}
	return (a);
}
