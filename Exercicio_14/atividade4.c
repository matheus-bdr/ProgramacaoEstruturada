/* Faça um programa que leia 2 valores
inteiros e chame uma
 função que receba estas
 2 variáveis e troque o seu conteúdo, ou seja,
  esta função é chamada passando duas variáveis A e B,
   por exemplo, e, após a execução da função, A conterá o valor de B e B terá o valor de A. */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void passando(int *pa, int *pb)
{

    int valor = *pa;

    *pa = *pb;
    *pb = valor;
}

main()
{

    int a, b;

    printf("Digite o valor de A:");
    scanf("%d", &a);

    printf("Digite o valor de B:");
    scanf("%d", &b);

    passando(&a, &b);

    printf("\nComo ficou o valor de A: %d", a);
    printf("\nComo ficou o valor de B: %d", b);
}