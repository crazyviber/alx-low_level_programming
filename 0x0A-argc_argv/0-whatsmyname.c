#include <stdio.h>

/**
 * main - this is the main function to print out the file name
 * @argc: agrc parameter
 * @argv: an array of argc
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
