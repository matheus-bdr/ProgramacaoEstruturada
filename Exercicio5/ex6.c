#include <stdio.h>
main()
{
  /*  Codifique um programa que lê um número inteiro. 
  A seguir o programa deve imprimir uma mensagem para 
  o usuário dizendo se o número digitado é par. Se o número não 
  for par, o programa não deve fazer nada. */
  int numero; 
  printf("insira aqui um numero inteiro: ");
  scanf("%d", &numero);

  if(numero%2==0){
    printf("numero par");
  }else{printf("numero impar");}
}
