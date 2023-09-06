#include <stdio.h>
main()
{
    /* Usando o comando switch, faça um algoritmo 
    que leia o número de DDD e informe a qual cidade pertence,
     considerando só os seguintes valores: 

61 - Brasília 

71 - Salvador 

11 - São Paulo 

21 - Rio de Janeiro 

32 - Juiz de Fora 

19 - Campinas 

27 - Vitória 

31 - Belo Horizonte 

Qualquer outro - uma cidade no Brasil sem identificação  */
    int pedido,qtd;
    float total;
    printf("---------------------------------------------------");
    printf("\nInsira o cod do prod: ");
    scanf("%d",&pedido);
    printf("\nInsira a quantidade: ");
    scanf("%d",&qtd);

    switch (pedido)
    {
    case 100:
        total = (10.10)*qtd;
        printf("o valor gasto: %.2f", total);
        break;
    case 101:
        total = 08.30*qtd;
        printf("o valor gasto: %.2f", total);
        break;
    case 102:
       total = 08.50*qtd; 
       printf("o valor gasto: %.2f", total);
        break;
    case 103:
       total = 12.50*qtd;
       printf("o valor gasto: %.2f", total);
        break;
    case 104:
        total = 13.25*qtd;
        printf("o valor gasto: %.2f", total);
        break;
    
    default:
        printf("Fora da tabela");
        break;
    }
    
}