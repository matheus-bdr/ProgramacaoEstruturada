/* Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array. */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{

    float valor[10];

    for (int i = 0; i < 10; i++)
    {

        i + 1;

        printf("\nEndereco do elemento na posicao %d: %d", i, &valor[i]);
    }
}