#include <stdio.h>

main() {
    float vetor[5];

    printf("Digite 5 numeros reais:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &vetor[i]);
    }

    int codigo;
    printf("Digite um codigo inteiro (0 para sair, 1 para ordem direta, 2 para ordem inversa):\n");
    scanf("%d", &codigo);

    switch (codigo) {
        case 0:
            printf("Programa encerrado.\n");
            break;
        case 1:
            printf("Vetor na ordem direta:\n");
            for (int i = 0; i < 5; i++) {
                printf("%f ", vetor[i]);
            }
            break;
        case 2:
            printf("Vetor na ordem inversa:\n");
            for (int i = 4; i >= 0; i--) {
                printf("%f ", vetor[i]);
            }
            break;
        default:
            printf("Codigo invalido.\n");
            break;
    }
}