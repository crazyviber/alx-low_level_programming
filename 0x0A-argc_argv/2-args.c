#include <stdio.h>

/**
 * main - main function to print
 * @argc: parameter
 * @argv: array of parameter
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
