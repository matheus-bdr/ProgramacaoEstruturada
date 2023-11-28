#include <stdio.h>
#include <string.h>
#define MAX 3 // CONSTANTE TAMANHO VETOR

// registro
typedef struct
{
    char nome[20];
    int idade;
    int id;
    int status;
} Aluno;


 void mudaValor(int *ponteiroNumero){
    *ponteiroNumero = 20;
 }
 void mudaLetra(char *ponteiroLetra){
    *ponteiroLetra = 'l' ;
 }
main()
{
    int numero;
    char letra;
    //passando endereço de numero 
    mudaValor(&numero);
    mudaLetra(&letra);
    printf("\nvalor de numero: %d", numero);
    printf("\nvalor da letra: %c", letra);
}