#include "main.h"
/**
 * print_sign - print sign
 * _putchar: print character
 * @n: character to be considered
 * Return: 1 if positive, -1 when negative, else 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}

}
