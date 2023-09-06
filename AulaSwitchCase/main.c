#include <stdio.h>
main()
{
    int dia;
    printf("---------------------------------------------------");
    printf("\nInsira um numero recorrenr=te a um dia da semana: ");
    scanf("%d",&dia);

    switch (dia)
    {
    case 1:
        printf("Segunda");
        break;
    case 2:
        printf("Terca");
        break;
    case 3:
        printf("Quarta");
        break;
    case 4:
        printf("Quinta");
        break;
    case 5:
        printf("Sexta");
        break;
    case 6:
        printf("Sabado");
        break;
    case 7:
        printf("Domingo");
        break;
    
    default:
        printf("invalido");
        break;
    }
}