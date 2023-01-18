#include <stddef.h>
/**
 * array_iterator - executes the function passed as a parameter
 *  @array: contains a list of numbers
 *  @size: size of the array
 *  @action: function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
	}
}
