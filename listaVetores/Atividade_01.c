#include <stdio.h>
#include <math.h>
#include <string.h>
main()
{
   int A[6] = {1, 0, 5, -2, -5, 7}, soma = 0, i;

   printf("\n-----------  questao A--------- \n");
   for (i = 0; i < 6; i++)
   {
      printf("\n o valor na posicao %d: %d", i, A[i]);
   }

   printf("\n-----------  questao B--------- \n");
   for (i = 0; i < 6; i++)
   {
      if (i == 0 || i == 1 || i == 5)
      {
         soma = soma + A[i];
         printf("\n o valor na posicao %d: %d", i, A[i]);
      }
   }
   printf("\n A soma dos valores eh: %d", soma);
   printf("\n-----------  questao C e D--------- \n");
   for (i = 0; i < 6; i++)
   {
      if (i == 4)
      {
         A[i] = 100;
      }
   }
   for (i = 0; i < 6; i++)
   {
      printf("\n o valor na posicao %d: %d", i, A[i]);
   }
   return 0;
}