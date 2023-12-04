/* Escreva um programa que contenha duas variáveis inteiras.
Leia essas variáveis do teclado.Em seguida, 
compare seus endereços e exiba o conteúdo do maior endereço. */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

main(){

int a, *pa;
int b, *pb; 

printf("Digite o valor de A:"); 
scanf("%d",&a);

printf("Digite o valor de B:"); 
scanf("%d",&b);

pa = &a; 
pb = &b; 

if (pa > pb){
    
printf("Endereco de A e maior: %d, com valor: %d", pa, *pa);

} else{

printf("Endereco de B e maior: %d, com valor: %d", pb, *pb);

    }

}