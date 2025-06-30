#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Affiche la somme des deux diagonales
 * d'une matrice carrée d'entiers.
 * @a: pointeur vers le tableau 2D (vu comme un int*)
 * @size: taille de la matrice (nombre de lignes/colonnes)
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int v;

	for (v = 0; v < size; v++)
	{
		sum1 += *(a + v * size + v);
		sum2 += *(a + v * size + (size - 1 - v));
	}

	printf("%d, %d\n", sum1, sum2);
}