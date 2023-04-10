#include "main.h"

/**
 * _abs - checks if n is positive or negative or zero.
 * @n: character variable to be checked.
 * Return: returns 1 if c is positive, returns -1 if c is negative.
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
