#include "main.h"

/**
 * _islower - main function
 *
 * @c: this is the character to be checked
 * Return: always 0
 */

int _islower(int c)
{
	if  (c >= 65 && c <= 122)
	{
	return (1);
	}
	return (0);
}
