#include <stdio.h>

int primo(int num) {
    if (num <= 1) {
        return 0; 
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

main() {
    int vetor[10];

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nElementos primos e suas posicoes:\n");
    for (int i = 0; i < 10; i++) {
        if (primo(vetor[i])) {
            printf("Elemento: %d, Posicao: %d\n", vetor[i], i);
        }
    }
}