#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/* Escreva um programa que declare um inteiro, um real e um char, 
e ponteiros para inteiro, real e char.Associe as variáveis aos ponteiros(use &).
Modifique os valores de cada variável usando os ponteiros.
Imprima os valores das variáveis antes e após a modificação. */
main(){

    int num;
    char nome[20];
    float num2;

    printf("Digite um valor pra INT:");
    scanf("%d", &num);
    fflush(stdin);

    printf("\nDigite um valor pra CHAR:");
    fgets(nome, sizeof(nome), stdin);
    fflush(stdin);

    printf("\nDigite um valor pra FLOAT:");
    scanf("%f", &num2);
    fflush(stdin);

    int *numero = &num;
    char *letra = &nome;
    float *numero2 = &num2;

    printf("\nValor INT antes da mudanca: %d", num);
    printf("\nValor CHAR antes da mudanca: %s", nome);
    printf("\nValor FLOAT antes da mudanca: %.2f", num2);

    *numero = num * 2;
    *letra = 'Y';
    *numero2 = num2 * 4;

    printf("\nValor INT depois da mudanca: %d", num);
    printf("\nValor CHAR depois da mudanca: %s", nome);
    printf("\nValor FLOAT depois da mudanca: %.2f", num2);
}