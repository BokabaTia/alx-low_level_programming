#include "main.h"
#include <stdio.h>

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
 * rev_string - reverses a string
 * @str: pointer to char, a string of characters
 * Return: void
**/
void rev_string(char *str)
{
	int len = strSize(str) - 1;
	int idx = 0;

	while (idx != len)
	{
		char temp = str[idx];

		str[idx] = str[len];
		str[len] = temp;
		idx++;
		len--;
	}
}
