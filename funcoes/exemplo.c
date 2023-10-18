#include<stdio.h>
//prototipo da funcao
void imprimir();
int soma(int n1, int n2); //passagem de parâmetro por valor

main(){
    imprimir(); // chamando/invocando a funcao

    int numero1, numero2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &numero1, &numero2);
    int retornoFuncao = soma(numero1, numero2); //retornoFuncao para guardar os valores retornados da funcao
    printf("O retorno da funcao e = %d", retornoFuncao);
}

//implementacao das funcoes

void imprimir(){
    //escopo da funcao
    printf("\nImprimindo...");
}

int soma(int n1, int n2){
    int soma = n1 + n2;
    return soma; //define o fim da funcao
}