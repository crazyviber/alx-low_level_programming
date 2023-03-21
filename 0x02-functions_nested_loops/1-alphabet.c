#include "main.h"

/**
 * print_alphabet - main function
 * _putchar: print alphabe
 * Return: always 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
		_putchar(letter);
	_putchar('\n');


}
