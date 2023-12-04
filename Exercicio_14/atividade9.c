/* Crie um programa que contenha uma matriz de inteiros contendo 3 linhas e 3 colunas. Imprima o endereço de cada posição dessa matriz */
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

main(){

int matriz[3][3];


for(int i = 0; i < 3; i++) {

    for(int j = 0; j < 3; j++){

    printf("\t%d", &matriz[i][j]);
    printf(" ");
    }
    printf("\n");
}

}