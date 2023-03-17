#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: zero
 */
int main(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
