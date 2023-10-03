#include <stdio.h>
#include <math.h>
main()
{
   int vetor[15], i, somaDasNotas = 0;
   float media;

   printf("\n-----------Atribuindo valores com o for e printando--------- \n");
   for (i = 0; i < 15; i++)
   {
      printf("Insira a nota do capeao: ");
      scanf("%d", &vetor[i]);
      somaDasNotas = somaDasNotas + vetor[i];
   }
   media = somaDasNotas / 15;
   printf("A media geral eh igual a: %.2f", media);
   return 0;
}