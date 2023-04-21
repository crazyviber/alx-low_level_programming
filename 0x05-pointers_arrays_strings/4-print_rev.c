#include "main.h"
#include <string.h>

/**
 * print_rev - main function
 * @s: param for print
 */
void print_rev(char *s)
{
	int n;

	s = "hello"
	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
