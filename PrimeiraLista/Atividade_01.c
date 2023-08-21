#include <stdio.h>

main()
{
   /* 1. Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números. */
   int numero1, numero2, soma, sub, mult;
   float div;
   printf("insira o primeiro numero: ");
   scanf("%d", &numero1);

   printf("insira o segundo numero: ");
   scanf("%d", &numero2);

   soma = numero1 + numero2;
   div = numero1 / numero2;
   mult = numero1 * numero2;
   sub = numero1 - numero2;

   printf("\nO valor da sua soma: %d", soma);
   printf("\nO valor da sua subtracao: %d", sub);
   printf("\nO valor da sua divisao: %.1f", div);
   printf("\nO valor da sua multiplicacao: %d", mult);
   return 0;
}