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

main()
{
    int *ponteiro, valor, a = 10, b = 20, *pA, *pB;
    
    printf("\n\nCASO 1\n");

    ponteiro = &valor;
    *ponteiro = 20;

    printf("conteudo de valor%d", valor);
    printf("\nconteudo de valor:%d", *ponteiro);
    ////////////////////////////////////////////////
    
    printf("\n\nCASO 2\n");
    
    pA = &a;
    pB = &b;

    *pA = *pA + *pB;

    printf("\nValor de A: %d", a);
    ////////////////////////////////////////////////
    
    printf("\n\nCASO 3\n");
    
    if (*pA > *pB)
    {
        printf("\nA maior");
    }
    else
    {
        printf("\nB maior");
    }
}