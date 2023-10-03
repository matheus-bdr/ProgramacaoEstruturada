#include <stdio.h>
#include <math.h>
main()
{
   int vetor[10], valoresPares=0, i;

   printf("\n-----------Atribuindo valores com o for e printando--------- \n");
   for (i = 0; i < 10; i++)
   {
      printf("Insira o valor de posicao no vetor: ");
      scanf("%d", &vetor[i]);
      if(vetor[i]%2==0){
         valoresPares++;
      }
   }
   printf("\n temos %d valores pares, sao eles: ",valoresPares);
   for (i = 0; i < 10; i++)
   {
      if(vetor[i]%2==0){
         printf("\no valor apresentado na posicao(%d) eh: %d \n",i,vetor[i]);
      }
   }
   return 0;
}