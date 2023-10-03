#include <stdio.h>
#include <math.h>
main()
{
   int vetor[8], x, y, i,soma,valor1,valor2;

   printf("\n-----------Atribuindo valores com o for e printando--------- \n");
   for (i = 0; i < 8; i++)
   {
      printf("Insira o valor de posicao no vetor: ");
      scanf("%d", &vetor[i]);
   }
   printf("Insira o valor de x: ");
   scanf("%d", &x);
   printf("Insira o valor de y: ");
   scanf("%d", &y);
   for (i = 0; i < 8; i++)
   {
      if(i==x){
         valor1 = vetor[i];
      }
      if(i==y){
        valor2 = vetor[i];
      }
   }
   soma = valor1+valor2;
    printf("A soma dos valores eh: %d \n",soma);
   return 0;
}