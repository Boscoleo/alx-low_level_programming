#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int p;

	for (p = 97; p <= 122; p++)
	{
		_putchar(p);
	}
	_puchar('\n');
}
