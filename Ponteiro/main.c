#include<stdio.h>
#include <string.h>
#define  MAX 3 //CONSTANTE TAMANHO VETOR

//registro
typedef struct{
    char nome[20];
    int idade;
    int id;
    int status;
}Aluno;

main(){
 int *ponteiro, valor;
/*  float *p;
 double *p2;
 struct Pessoa *p3;
 char *ponteiroNome; */

 printf("Endereco de memoria que se encontra o valor %d", &valor);
 printf("\nEndereco de memoria que se encontra o ponteiro %d", &ponteiro);

 valor = 10;
 //endereço de memória da variavel valor 
 ponteiro = &valor;
    //outra forma de declarar o ponteiro
    // ponteiro = NULL;
 printf("\nO conteudo da variavel valor %d", valor);
 printf("\nO conteudo da variavel ponteiro %d", ponteiro);
}