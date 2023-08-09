//variavel = nome + endereço + conteúdo 
//tipos primitivos: int %d, char %s %c, float %f, double float %lf 
#include <stdio.h>
main() {

   int num =0;
   printf("\n variavel num tem o endereco %d", &num);
   printf("\n variavel num tem o valor %d", num);

   printf("\n insira seu numero: ");
   scanf("%d",&num);
   
   printf("\n valor inserido %d" ,num);
   return 0;
}
