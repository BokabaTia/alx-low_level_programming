#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of the
 * program
 * @ac: number of arguments
 * @av: double pointer to the arguments
 * Return: a string with all arguments
 */
char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int i = 0, j = 0, len = ac, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
}
