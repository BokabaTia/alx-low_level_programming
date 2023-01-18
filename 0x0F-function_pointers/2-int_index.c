/**
* int_index - returns the index of the searched value
* @array: array where the value is being searched for
* @size: size of the array
* @cmp: function for comparing values
*
* Return: -1 if no index was found and the index if found
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
