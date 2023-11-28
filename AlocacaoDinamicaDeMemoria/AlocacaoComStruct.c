#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char nome[20];
    int idade;
    int id;
    int nota;
} Aluno;

main(){
    Aluno *a;
    a = (Aluno*)malloc(sizeof(Aluno));
    printf("\nDigite um nome: ");
    fgets(a->nome,sizeof(a->nome),stdin);
    
    printf("\nDigite a idade: ");
    scanf("%d",&a->idade);

    printf("\nDigite a nota: ");
    scanf("%d",&a->nota);
    
    fflush(stdin);

    printf("\nSeu nome: %s",a->nome);
    printf("\nSeu idade: %d",a->idade);
    printf("\nSeu nota: %d",a->nota);

    free(a);
}