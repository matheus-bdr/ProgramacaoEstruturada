/* Instruções
1. Faça um programa que leia um número inteiro 
positivo N e imprima todos os números naturais de 0 até N em ordem crescente.
 */
#include <stdio.h>
 #include <math.h>
main()
{
    int n = 0, numeroInserido;
    printf("Insira aqui um numero: ");
    scanf("%d",&numeroInserido);
    while(n<=numeroInserido){
        printf("\n numero: %d", n);
        n++;
    }  
}