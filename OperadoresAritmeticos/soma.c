#include <stdio.h>
// #include <locale.h>
// setlocale(LC_ALL, "portuguese");

main()
{ 
    int numero1,numero2,soma, sub, div, mult;

    printf("insira o primeiro numero: ");
    scanf("%d",&numero1);

    printf("insira o segundo numero: ");
    scanf("%d",&numero2);

    soma = numero1+numero2;
    div = numero1/numero2;
    mult = numero1*numero2;
    sub = numero1-numero2;

    printf("\nO valor da sua soma: %d", soma);
    printf("\nO valor da sua subtracao: %d", sub);
    printf("\nO valor da sua divisao: %d", div);
    printf("\nO valor da sua multiplicacao: %d", mult);
}