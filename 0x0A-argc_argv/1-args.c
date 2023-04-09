#include <stdio.h>

/**
 * main - main function to print a number followed by a new line
 * @argc: parameter to print a new line
 * @argv: new parameter
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
