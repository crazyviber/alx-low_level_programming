#include "main.h"
/**
 * _abs - absolute value of a number
 *
 * @c: character to be considered
 * Return: return is c les than 0
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_vals;

	abs_vals = (c * -1);
	return (abs_vals);
	}
	return (c);
}
