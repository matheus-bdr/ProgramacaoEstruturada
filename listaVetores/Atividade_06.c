#include <stdio.h>
#include <math.h>
main()
{
   int vetor[10], valoresPares=0, i,maior=0,menor;

   printf("\n-----------Atribuindo valores com o for e printando--------- \n");
   for (i = 0; i < 10; i++)
   {
      printf("Insira o valor de posicao no vetor: ");
      scanf("%d", &vetor[i]);
      
      if(vetor[i]>maior){
         maior = vetor[i];
      }
      if(vetor[i]<menor){
         menor = vetor[i];
      }
   }
   printf("o valor do maior numero: %d\no valor do menor numero: %d",maior,menor);
   return 0;
}