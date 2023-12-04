#include<stdio.h>

main(){
    int vetor[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0){
            vetor[i] = 0;
        }
        printf("\nVETOR: %d", vetor[i]);
    }
}