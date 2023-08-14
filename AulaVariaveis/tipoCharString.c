#include <stdio.h>
/*
 um array = (0,1,2,3,4,5)

 nome[7] = _ _ _ _ _ _ _

 apontamento a espaçamento em memória.
*/
main()
{
    char nome[50];

    printf("insira aqui um nome: ");
    scanf("%s",&nome);
//possivel erro por apontamento
    printf("nome: %s" , nome);
}
