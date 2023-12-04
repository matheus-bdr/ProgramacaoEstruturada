#include <stdio.h>

float solicitaTotalGasto(float totalGasto);
void imprimiOpcoes();
float escolheOpcao(float opcaoVariavel, float valorRecebido);
float calculaValorFinal(float opcao, float valorGasto);


main()
{
    float valorTotalGasto = solicitaTotalGasto(valorTotalGasto);
    imprimiOpcoes();
    int escolheOpcaoRetorno = escolheOpcao(escolheOpcaoRetorno,valorTotalGasto);
    float calcula= calculaValorFinal( escolheOpcaoRetorno,  valorTotalGasto);
    printf("O valor total da sua compra foi: %.2f", calcula);
}



// funcoes
float solicitaTotalGasto(float totalGasto)
{
    printf("Insira o valor total gasto: ");
    scanf("%f", &totalGasto);
    return totalGasto;
}
float escolheOpcao(float opcaoVariavel, float valorRecebido)
{
    int opcao = opcaoVariavel;
    do
    {
        printf("Insira a sua opcao: ");
        scanf("%d", &opcao);
        if(opcao==3 &&valorRecebido<=100){
            opcao = 10;
        }
    } while (opcao < 1 && opcao > 3);

    return opcao;
}
void imprimiOpcoes()
{
    printf("\n (1) A VISTA ");
    printf("\n --a vista vc tem 10 por cento de desconto--");
    printf("\n (2) EM 2 VEZES ");
    printf("\n --preco da etiqueta--");
    printf("\n (3) EM 3 A 10 VEZES ");
    printf("\n --compras acima de 100,00, 3por cento de juros ao mes--");
}
float calculaValorFinal(float opcao, float valorGasto)
{
    int opcaoEscolhida = opcao, quantidadeDeParcelas;
    switch (opcaoEscolhida)
    {
    case 1:
        valorGasto = valorGasto - (valorGasto * 0.10);
        break;
    case 2:
        valorGasto = valorGasto;
        break;
    case 3:
        do
        {
            printf("Insira aqui a sua quantidade de parcelas: ");
            scanf("%d", &quantidadeDeParcelas);
        } while ((quantidadeDeParcelas < 3 && quantidadeDeParcelas > 10)&&valorGasto>100);
        valorGasto = valorGasto + (valorGasto * 0.3);
        break;
    }
    return valorGasto;
}