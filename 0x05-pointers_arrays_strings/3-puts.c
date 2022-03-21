#include "main.h"
/**
 * _puts - Prints a string, followed by a new line
 * @str: Pointer to the string to print
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
