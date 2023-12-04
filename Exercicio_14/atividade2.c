//Escreva um programa que contenha duas variáveis inteiras.
//Compare seus endereços e exiba o maior endereço.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

main(){

int A , *PA;
int B , *PB;

printf("Digite um valor pra A:");
scanf("%d", &A);
fflush(stdin);

printf("\nDigite um valor pra B:");
scanf("%d", &B);
fflush(stdin);

PA = A;
PB = B;

if(PA > PB){

printf("Endereco de A e maior: %d", &PA);    

} else{

printf("Endereco de B e maior: %d", &PB);     

}

}