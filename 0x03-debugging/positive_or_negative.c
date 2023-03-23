#include "main.h"

/**
 * positive_or_negative - main function
 * @i: character to be considered
 * Return : none
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
