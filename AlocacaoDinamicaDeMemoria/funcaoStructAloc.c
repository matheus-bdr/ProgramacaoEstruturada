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

// funcao do tipo endereço de memoria aluno
Aluno *cadastrar()
{
    // alocar o endereco pra gravar o aluno
    // Aluno *aluno; = mesma coisa da linha abaixo
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));

    fflush(stdin);

    printf("\nDigite um nome: ");
    fgets(aluno->nome, sizeof(aluno->nome), stdin);

    fflush(stdin);

    printf("\nDigite a idade: ");
    scanf("%d", &aluno->idade);

    fflush(stdin);

    printf("\nDigite a nota: ");
    scanf("%d", &aluno->nota);

    return aluno;
}

main()
{
    Aluno *a;

    a = cadastrar();

    printf("\nSeu nome: %s",a->nome);
    printf("\nSeu idade: %d",a->idade);
    printf("\nSeu nota: %d",a->nota);
}