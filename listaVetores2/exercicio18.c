#include <stdio.h>

int main() {
    int vetor[10];

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    int x;
    printf("Digite um numero inteiro para encontrar os multiplos: ");
    scanf("%d", &x);

    printf("Multiplos de %d no vetor:\n", x);
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % x == 0) {
            printf("%d ", vetor[i]);
        }
    }
}