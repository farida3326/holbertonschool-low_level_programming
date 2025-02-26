#include "main.h"

/**
 * print_most_numbers - Affiche les nombres de 0 à 9, sauf 2 et 4.
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
	}

	_putchar('\n');
}
