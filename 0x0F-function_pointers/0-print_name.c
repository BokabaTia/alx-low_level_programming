#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: function that prints the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
