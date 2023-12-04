#include <stdio.h>

main() {
    int vetor[100];

    int numero = 1; 
    int indice = 0; 

    while (indice < 100) {
        if (numero % 7 != 0 && numero % 10 != 7) {
            vetor[indice] = numero;
            indice++;
        }
        numero++;
    }

    printf("Vetor com os 100 primeiros naturais que nao sao multiplos de 7 ou terminam com 7:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }
}