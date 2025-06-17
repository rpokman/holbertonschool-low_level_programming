#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Affiche le dernier chiffre d'un nombre aléatoire et son état
 * Return: Always 0 (Success)
 */
int main(void)
{

    char alphabet = 'a';

    while (alphabet <= 'z')
    {
        putchar(alphabet);

        alphabet++;
    }

    putchar('\n');
    return (0);
}
