#include <stdio.h>

/* 2. Escreva um programa que receba um número qualquer e mostre o seu dobro. */
main()
{
   float numero;
   printf("insira aqui seu numero: ");
   scanf("%f",&numero);
   numero = numero *2;
   printf("O dobro do seu numero eh: %.1f", numero);
   return 0;
}