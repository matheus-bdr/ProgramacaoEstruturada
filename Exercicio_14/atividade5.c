/* Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores
de entrada e retorne o maior valor na primeira
variável e o menor valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela. */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int mudar(int *a, int *b)
{

    if (*a > *b)
    {
    }
    else
    {

        int sla = *a;
        *a = *b;
        *b = sla;
    }
}

main()
{

    int num1;
    int num2;

    printf("Digite o valor 1:");
    scanf("%d", &num1);

    printf("\nDigite o valor 2:");
    scanf("%d", &num2);

    printf("\nValores anter de mudar: %d, %d", num1, num2);

    mudar(&num1, &num2);

    printf("\nValores depois de mudar: %d, %d", num1, num2);
}