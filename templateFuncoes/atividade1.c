#include <stdio.h>

int recebeInteiro(int numeroInteiro);
float recebeFloat(float numeroFloat);
char recebeTexto(char valorTexto);

main()
{
    int valor = recebeInteiro(valor);
    printf("valor do inteiro: %d",valor);
}
//funcoes
int recebeInteiro(int numeroInteiro)
{
    printf("Insira seu numero inteiro: ");
    scanf("%d", &numeroInteiro);
    return numeroInteiro;
}
float recebeFloat(float numeroFloat)
{
    printf("Insira seu numero Float: ");
    scanf("%d", &numeroFloat);
    return numeroFloat;
}
char recebeTexto(char valorTexto)
{
    printf("\n Digite um String: ");
    fgets(valorTexto, 20, stdin);
    return valorTexto;
}
