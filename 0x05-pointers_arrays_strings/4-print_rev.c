#include "main.h"

/**
 * strSize - gets the length of the string
 * @str: pointer to char, a string of characters
 * Return: integer
**/

int strSize(char *str)
{
	int count = 0;

	while (*str++)
	{
		count++;
	}

	return (count);
}

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @str: pointer to char, a string of characters
 * Return: void
**/
void print_rev(char *str)
{
	int len = strSize(str);

	while (len > -1)
	{
		_putchar(str[len--]);
	}
	_putchar('\n');
}
