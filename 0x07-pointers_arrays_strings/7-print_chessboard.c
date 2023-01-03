#include "main.h"
/**
 * print_chessboard - primt the chess board
 * @a: array of pieces
 *
 * Return: Nothing
*/
void print_chessboard(char (*a)[8])
{
	int b;
	int c;

	for (b = 0; b < a; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}
