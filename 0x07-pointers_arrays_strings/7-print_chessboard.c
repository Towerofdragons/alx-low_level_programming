#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints the predefined chessboard
 * @a: multidim array with board
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	row = 0;
	column = 0;

	while (row < 8)
	{
		while (column < 8)
		{
			_putchar((*(a + row))[column]);
			column++;
		}
		_putchar('\n');
		column = 0;
		row++;
	}
}
