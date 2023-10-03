#include <stdio.h>
#include <math.h>
main()
{
   int vetor[10], valoresPares=0, i,maior=0,posicao;

   printf("\n-----------Atribuindo valores com o for e printando--------- \n");
   for (i = 0; i < 10; i++)
   {
      printf("Insira o valor de posicao no vetor: ");
      scanf("%d", &vetor[i]);
      
      if(vetor[i]>maior){
         maior = vetor[i];
         posicao = i;
      }
      
   }
      printf("o maior valor, que se encontra na posicao %d: %d",posicao,maior);
   return 0;
}