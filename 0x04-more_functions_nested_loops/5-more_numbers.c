#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Prints _putchar
 *
 * Description: when executed it prints _putchar.
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 15; j++)
	{
		if (j >= 10)
			_putchar(j / 10 + '0');
		_putchar(j % 10 + '0');
	}
	_putchar('\n');
}
