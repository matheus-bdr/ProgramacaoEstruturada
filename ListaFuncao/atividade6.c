#include <stdio.h>

float CalculaIMC(float peso, float altura);
main()
{
    float peso, altura;

    printf("Insira o seu peso: ");
    scanf("%f", &peso);
    printf("Insira a sua altura: ");
    scanf("%f", &altura);

    float retornoFuncao = CalculaIMC(peso,altura);
    printf("o IMC da pessoa eh: %.2f", retornoFuncao);
}

float CalculaIMC(float peso, float altura)
{
    float IMC;
    IMC = peso/(altura*altura);
    return IMC;
}