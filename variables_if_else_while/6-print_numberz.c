#include <stdio.h>

/**
 * main - Point d'entrÃ©e du programme
 * Description: Affiche les chiffres de 0 Ã 9 en utilisant putchar
 * Return: Toujours 0 (SuccÃ¨s)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');

	return (0);
}
