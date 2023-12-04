#include <stdio.h>

main() {
    int vetor1[10];
    int vetor2[10];

    printf("Digite 10 numeros inteiros no intervalo (0,50]:\n");
    for (int i = 0; i < 10; i++) {
        do {
            scanf("%d", &vetor1[i]);
        } while (vetor1[i] <= 0 || vetor1[i] > 50);
    }

    int contadorVetor2 = 0;
    for (int i = 0; i < 10; i++) {
        if (vetor1[i] % 2 != 0) {
            vetor2[contadorVetor2] = vetor1[i];
            contadorVetor2++;
        }
    }

    printf("\nVetor1:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor1[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    printf("\nVetor2 (numeros impares de Vetor1):\n");
    for (int i = 0; i < contadorVetor2; i++) {
        printf("%d ", vetor2[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }
}