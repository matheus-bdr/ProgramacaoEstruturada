#include <stdio.h>

main() {
    int vetor1[10];
    int vetor2[10];
    int vetor3[20]; 

    printf("Digite 10 numeros inteiros para o primeiro vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }
    printf("Digite 10 numeros inteiros para o segundo vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < 10; i++) {
        vetor3[2 * i] = vetor1[i];
        vetor3[2 * i + 1] = vetor2[i];
    }

    printf("Terceiro vetor (posicoes pares de vetor1 e posicoes impares de vetor2):\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor3[i]);
    }
}