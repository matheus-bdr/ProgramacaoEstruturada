#include <stdio.h>
main()
{

    char nome[30];

    printf("insira um nome: ");
    scanf("%s", nome);
    fflush(stdin);
    printf("nome 1: %s", nome);

    // printf("\n-------------------------\n");

    // char nome2[30];

    // printf("insira um nome 2: ");
    // scanf("%[^\n]", nome2);
    // printf("nome 2: %s", nome2);

    printf("\n-------------------------\n");

    char nome3[30];

    printf("insira um nome 3: ");
    fgets(nome3,30,stdin);
    fflush(stdin);
    printf("nome 3: %s", nome3);
}
