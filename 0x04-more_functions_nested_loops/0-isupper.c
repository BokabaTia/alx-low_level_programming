#include "main.h"

/**
 * _isupper- Checks whether a character is uppercase or not
 * @c: single character to be checked
 * Return: Either 1 or 0 depending on the character 'c'
 */

int _isupper(char c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
