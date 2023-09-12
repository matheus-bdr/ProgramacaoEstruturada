#include <stdio.h>
#include <math.h>
main()
{
    /*  2. Faça um programa que leia um número inteiro
 positivo N e imprima todos os números naturais de 0 até N em ordem decrescente. */
    int n = 0, numeroInserido;
    printf("Insira aqui um numero: ");
    scanf("%d", &numeroInserido);
    while (numeroInserido >= n)
    {
        printf("\n numero: %d", numeroInserido);
        numeroInserido--;
    }
}