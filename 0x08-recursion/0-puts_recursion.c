#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string
 * Return: pointer
 */

void _puts_recursion(char *str)
{
	if(*str)
	{
		_putchar(*str);
		_puts_recursion(str + 1);
	}
	
	else
		_putchar('\n');
		return 0;
}
