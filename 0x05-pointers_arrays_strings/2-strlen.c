#include "main.h"

/**
 * _strlen - lenght of string
 * @s: character considered
 * Return: is 0
 */


int _strlen(char *s)
{
	int i;
	int count;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
