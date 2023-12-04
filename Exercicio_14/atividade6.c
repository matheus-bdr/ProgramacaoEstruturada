/* Elaborar um programa que leia dois valores inteiros (A e B).
 Em seguida, faça uma função que retorne a soma do dobro dos dois
 números lidos. A função deverá armazenar o dobro de A na própria
 variável A e o dobro de B na própria variável B */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int dobrar(int *a, int *b)
{

    *a = *a * 2;
    *b = *b * 2;

    int soma = *a + *b;
}

main()
{

    int num1;
    int num2;
    int soma;

    printf("Digite o valor 1:");
    scanf("%d", &num1);

    printf("\nDigite o valor 2:");
    scanf("%d", &num2);

    printf("\nValores: %d, %d", num1, num2);

    soma = dobrar(&num1, &num2);

    printf("\nValores depois de dobrar e somar: %d", soma);
}