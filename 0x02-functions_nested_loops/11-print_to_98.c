#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - main function to print to 98
 * @n: character to be considered
 * Return: prints to 98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
		break;
	}
	else
	{
		printf("%d, ", n);
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
		break;
	}
	else
	{
		printf("%d, ", n);
	}
	}
	}
}
