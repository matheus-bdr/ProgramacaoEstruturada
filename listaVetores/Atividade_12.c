#include <stdio.h>
#include <math.h>
main()
{
   int vetor[5], i, valoresNegativos = 0, soma = 0, maior = 0, menor;
   float media;
   printf("\n-----------Atribuindo valores com o for e printando--------- \n");

   for (i = 0; i < 5; i++)
   {
      printf("Insira o primeiro valor: ");
      scanf("%d", &vetor[i]);
      if (vetor[i] > maior)
      {
         maior = vetor[i];
      }
      if (vetor[i] < menor)
      {
         menor = vetor[i];
      }
      soma = soma + vetor[i];
   }

   media = soma/5;

   for (i = 0; i < 5; i++)
   {
      printf("\nO valor negativo na posicao %d eh igual a: %d", i, vetor[i]);
   }
   printf("\nO maior valor: %d", maior);
   printf("\nO menor valor: %d", menor);
   printf("\na media dos valores: %.2f", media);

   return 0;
}