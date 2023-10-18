#include <stdio.h>

float ConverteTemperatura(float fahrenheit);
main()
{
    float fahrenheit;

    printf("Insira uma temperatura em fahrenheit: ");
    scanf("%f", &fahrenheit);
   float retornoFuncao = ConverteTemperatura(fahrenheit);
   printf("A temperatura em Celsos: %.2f",retornoFuncao);
}

float ConverteTemperatura(float fahrenheit)
{
   
   float c = (fahrenheit-32.0)*(5.0/9.0);
   return c;
}