#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * @c: c check for lowercase charater
 *
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
