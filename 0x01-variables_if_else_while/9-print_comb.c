#include <stdio.h>

/**
 * main - main function
 *
 * Return: alway 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
{
		putchar((i % 10) + '0');
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
}
	return (0);
}
