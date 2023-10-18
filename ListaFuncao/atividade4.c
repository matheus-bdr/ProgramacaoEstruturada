#include <stdio.h>
#define pi 3.1414592

float CalculaCilindro(float r, float a);
main()
{
    float raio, altura;

    printf("Insira o seu raio: ");
    scanf("%f", &raio);
    printf("Insira a sua altura: ");
    scanf("%f", &altura);

    float retornoFuncao = CalculaCilindro(raio,altura);
    printf("A temperatura em Celsos: %.2f", retornoFuncao);
}

float CalculaCilindro(float r, float a)
{
    float VolumeCilindro;
    VolumeCilindro = pi*(r*r)*a;
    return VolumeCilindro;
}