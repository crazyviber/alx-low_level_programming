#include <stdio.h>

/**
 * main - main function
 *
 * Return: is always 0
 */
int main(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
/* print lowercase letters */
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
