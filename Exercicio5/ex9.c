#include <stdio.h>
main()
{
    /*  Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual e
    o tempo de serviço de cada funcionário. Os funcionários com menor salario terão um aumento proporcionalmente
    maior do que os funcionários  com um salario maior, e conforme o tempo de serviço na empresa, cada funcionário
    irá receber um bônus adicional de salário. Faça um programa que leia:

  • o valor do salario atual do funcionário;

  • o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).

  Use as tabelas abaixo para calcular o salario reajustado deste funcionário e imprima o valor do salario final reajustado,
   ou uma mensagem caso o funcionário não tenha direito a nenhum aumento.

  */

    int tempo;
    float salario;
    printf("insira aqui o seu salario: ");
    scanf("%f", &salario);
    printf("insira aqui o seu tempo de empresa em anos: ");
    scanf("%d", &tempo);
    if (salario <= 500 && tempo < 1)
    {
        salario = salario+ (salario * 0.25);
    }
    else if (salario <= 1000 && tempo >= 1 && tempo <= 3)
    {
        salario = salario+ (salario * 0.20);
    }
    else if (salario <= 1500 && tempo >= 4 && tempo <= 6)
    {
        salario = salario+ (salario * 0.15);
    }
    else if (salario <= 2000 && tempo >= 7 && tempo <= 10)
    {
        salario = salario+ (salario * 0.10);
    }

    printf("O seu salário com reajuste eh: %f", salario);
}