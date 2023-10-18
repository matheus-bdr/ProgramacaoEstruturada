#include <stdio.h>
#define pi 3.1414592

float CalculaEsfera(float r);
main()
{
    float raio;

    printf("Insira o seu raio: ");
    scanf("%f", &raio);

    float retornoFuncao = CalculaEsfera(raio);
    printf("O volume eh: %.2f", retornoFuncao);
}

float CalculaEsfera(float r)
{
    float VolumeEsfera;
    VolumeEsfera = (4*(pi) * (r*r*r))/3;
    return VolumeEsfera;
}