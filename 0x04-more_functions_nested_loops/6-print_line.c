#include "holberton.h"

/**
 * print_line - print a line.
 *@n:n
 * Return: 0.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
	{
		_putchar ('-');
	}
	}
	_putchar ('\n');
}
