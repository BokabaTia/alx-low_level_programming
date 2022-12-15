#include "main.h"

/**
 * _isupper- Checks whether integer is a digit or not
 * @c: integer parameter
 * Return: Either 1 or 0 depending on the integer 'c'
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
