#include "holberton.h"

/**
 * print_chessboard - print chessboard.
 * @a: array a
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{

	int r,c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar (a[r] [c]);
		}
	_putchar ('\n');
	}
}
