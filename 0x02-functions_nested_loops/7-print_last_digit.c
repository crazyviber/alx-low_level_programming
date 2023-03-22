#include "main.h"

/**
 * print_last_digit - funtion to print last digit
 * @n: character to be considered
 * Return: is n
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
		if (last < 10)
		last = last * -1;
	return (last);
}
