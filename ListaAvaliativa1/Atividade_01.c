#include <stdio.h>
#include <math.h>
main()
{
   float x, funcao; 
   printf("Insira aqui o valor de x: ");
   scanf("%f",&x);

   funcao = ((5*x)+3)/sqrt((x*x)-16);
   printf("O valor da funcao: %2.f", funcao);

   return 0;
}