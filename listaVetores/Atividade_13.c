#include <stdio.h>
#include <math.h>
main()
{
   int vetor[5], i, valoresNegativos = 0, soma = 0, maior = 0, menor;

   printf("\n-----------Atribuindo valores com o for e printando--------- \n");

   for (i = 0; i < 5; i++)
   {
      printf("Insira o primeiro valor: ");
      scanf("%d", &vetor[i]);
      if (vetor[i] > maior)
      {
         maior = i;
      }
      if (vetor[i] < menor)
      {
         menor = i;
      }
      soma = soma + vetor[i];
   }

   

   for (i = 0; i < 5; i++)
   {
      printf("\nO valor negativo na posicao %d eh igual a: %d", i, vetor[i]);
   }
   printf("\nO maior valor se encontra na posicao: %d", maior);
   printf("\nO menor valor se encontra na posicao: %d", menor);

   return 0;
}