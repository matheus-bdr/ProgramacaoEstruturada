#include <stdio.h>

int soma(int n1, int n2);

main()
{
    int mes;
    do
    {
        printf("Digite o numero do mes: ");
        scanf("%d", &mes);
    }while(mes<1 && mes>12);
    escolheMes(mes);
}

int escolheMes(int mes)
{
    switch (mes)
    {
    case 1:
        printf("janeiro");
        printf("\n 31 dias");
        break;
    case 2:
        printf("fevereiro");
        printf("\n 30 dias");
        break;
    case 3:
        printf("marco");
        printf("\n 31 dias");
        break;
    case 4:
        printf("abril");
        printf("\n 30 dias");
        break;
    case 5:
        printf("maio");
        printf("\n 31 dias");
        break;
    case 6:
        printf("junho");
        printf("\n 30 dias");
        break;
    case 7:
        printf("julho");
        printf("\n 31 dias");
        break;
    case 8:
        printf("agosto");
        printf("\n 31 dias");
        break;
    case 9:
        printf("setembro");
        printf("\n 30 dias");
        break;
    case 10:
        printf("outubro");
        printf("\n 31 dias");
        break;
    case 11:
        printf("novembro");
        printf("\n 30 dias");
        break;
    case 12:
        printf("dezembro");
        printf("\n 31 dias");
        break;
    
    default:
        printf("erro");
        break;
    }
}