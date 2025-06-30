#include "main.h"
#include <stddef.h>

/**
 * print_chessboard - Prints an 8x8 chessboard
 * @a: Pointer to a 2D array representing the board
 *
 * Return: Nothing (void)
 */
void print_chessboard(char (*a)[8])
{
    unsigned int ligne, colone;

    for (ligne = 0; ligne < 8; ligne++)
    {
        for (colone = 0; colone < 8; colone++)
        {
            _putchar(a[ligne][colone]);
        }
        _putchar('\n');
    }
}