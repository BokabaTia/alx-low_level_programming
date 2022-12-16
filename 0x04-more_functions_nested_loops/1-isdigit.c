#include "main.h"

/**
 * _isupper- Checks whether character is a digit or not
 * @c: character being checked
 * Return: Either 1 or 0 depending on the integer 'c'
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
