#include <stdio.h>
main()
{

   /*
   Construir um algoritmo que leia um número e imprima se ele é 
   igual a 5, a 200, a 400, se está no 
   intervalo entre 500 e 1000, ou se ela está fora dos escopos anteriores. 
   */
  int numero;
    printf("Insira um numero inteiro: ");
    scanf("%d",&numero);

    if(numero==5 ){
        printf("numero igual a 5");
    }else if(numero==200){
        printf("numero igual a 200");
    }else if(numero==400){
        printf("numero igual a 400");
    }else if(numero>500 && numero<=1000){
        printf("intervalo entre 500 e 1000, ou se ela está fora dos escopos anteriores.");
    }else{
        printf("Nao se encaixa nas alternativas");
    }
}