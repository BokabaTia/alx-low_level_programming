#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14, 10 times
 * Return: void
 */

void more_numbers(void)
{
	char a;
	char b = '\0';
	int idx = 0;
	int isMore;

	while (idx < 10)
	{
		a = '0';
		b = '0';
		isMore = 0;
		while (a <= '>')
		{

			isMore = a >= ':' && a <= '>';

			_putchar(isMore ? '1' : a);

			if (isMore)
			{
				_putchar(b++);
			}
			else
			{
				_putchar('\0');
			}
			a++;
		}
		isMore = 0;
		_putchar('\n');
		idx++;
	}
}

