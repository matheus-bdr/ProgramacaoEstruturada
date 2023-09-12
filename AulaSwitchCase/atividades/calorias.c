#include <stdio.h>
main()
{
   //teste
    int calorias,pedido;
    printf("---------------------------------------------------");
    printf("\nInsira seu pedido: ");
    scanf("%d",&pedido);

    switch (pedido)
    {
    case 1:
        calorias = 180+75+20;
        printf("As calorias ingeridas sao %d", calorias);
        break;
    case 2:
        calorias = 230+110+70;
        printf("As calorias ingeridas sao %d", calorias);
        break;
    case 3:
        calorias = 250+170+100;
        printf("As calorias ingeridas sao %d", calorias);
        break;
    case 4:
        calorias = 350+200+65;
        printf("As calorias ingeridas sao %d", calorias);
        break;

    default:
        printf("Não se encaixa em nenhuma categoria");
        break;
    }
}