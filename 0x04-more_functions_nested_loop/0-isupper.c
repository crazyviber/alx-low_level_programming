#include "main.h"
/**
 * _isupper - main function
 * @c: character to be considered
 * Return: 1 or whether it is 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'z'))
	{
		return (1);
	}

	return(0);
}
