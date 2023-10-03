#include <stdio.h>
#include <math.h>
#include <limits.h>
//int maior = INT_MIN, menor = INT_MAX;
main()
{
   float x, funcao; 
   printf("Insira aqui o valor de x: ");
   scanf("%f",&x);

   funcao = ((5*x)+3)/sqrt((x*x)-16);
   printf("O valor da funcao: %.2f", funcao);

   return 0;
}