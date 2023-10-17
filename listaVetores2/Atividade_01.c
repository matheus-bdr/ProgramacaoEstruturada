#include <stdio.h>
#include <math.h>
#include <string.h>
main()
{
   int vetor[10], i;

   printf("\n-----------Atribuindo valores com o for e printando--------- \n");
   for (i = 0; i < 10; i++)
   {
      printf("Insira o valor: ");
      scanf("%d", &vetor[i]);
   }
   for (i = 0; i < 10; i++)
   {
      for (int j = i + i; j < 10; j++)
      {
         
      }
   }
   return 0;
}