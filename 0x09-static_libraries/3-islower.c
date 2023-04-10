
#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: character variable to be checked.
 * Return: returns 1 if c is a lower case character, otherwise returns 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
