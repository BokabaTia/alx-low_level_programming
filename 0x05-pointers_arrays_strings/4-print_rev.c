#include "main.h"


/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @str: pointer to char, a string of characters
 * Return: void
**/

void print_rev(char *str)
{
	int len = _strlen(str);

	while (len > -1)
	{
		_putchar(str[len--]);
	}
	_putchar('\n');
}
