#include <stdio.h>
#include <math.h>
main()
{
   int vetor[10], i, valoresNegativos = 0,soma=0;
   printf("\n-----------Atribuindo valores com o for e printando--------- \n");
   for (i = 0; i < 10; i++)
   {
      printf("Insira o primeiro valor: ");
      scanf("%d", &vetor[i]);
      if(vetor[i]<0){
         valoresNegativos ++;
      }else{
         soma = soma + vetor[i];
      }
   }
   
   printf("\nA quantidade de numeros negativos eh: %d", valoresNegativos);
   for (i = 0; i < 10; i++)
   {
      if(vetor[i]<0){
         printf("\nO valor negativo na posicao %d eh igual a: %d", i,vetor[i]);
      }
   }
   printf("\nA soma dos valores positivos sao: %d", soma);
   for (i = 0; i < 10; i++)
   {
      if(vetor[i]>0){
         printf("\nO valor negativo na posicao %d eh igual a: %d", i,vetor[i]);
      }
   }
   return 0;
}