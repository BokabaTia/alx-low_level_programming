#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: pointer to char, a string of characters
 * Return: void
**/

int _strlen(char *str)
{
	int count = 0;

	while (*str++)
	{
		count++;
	}

	return (count);
}
