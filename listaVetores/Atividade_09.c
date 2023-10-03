#include <stdio.h>
#include <math.h>
main()
{
   int vetor[6], i;

   printf("\n-----------Atribuindo valores com o for e printando--------- \n");
   for (i = 0; i < 6; i++)
   {
      do
      {
         printf("Insira o valor de posicao no vetor: ");
         scanf("%d", &vetor[i]);
      } while (vetor[i]%2!=0);
   }
   for (i = 5; i >= 0; i--)
   {
      printf("\no maior valor, que se encontra na posicao %d: %d", i, vetor[i]);
   }
   return 0;
}