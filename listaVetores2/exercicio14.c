#include <stdio.h>

main() {
    int vetor[10];
    
    for (int i = 0; i < 10; i++) {
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("Valores repetidos:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) { //POSICAO SUBSEQUENTE
            if (vetor[i] == vetor[j]) { // verifica se o valor repetido foi encontrado
                // Verifique se o valor já foi impresso antes
                int repetido = 0;
                for (int k = 0; k < i; k++) {  //verifica se o valor atual em vetor[i] já foi impresso anteriormente
                    if (vetor[i] == vetor[k]) {
                        repetido = 1;
                        break;
                    }
                }
                if (!repetido) { //não tiver sido impresso antes
                    printf("%d\n", vetor[i]);
                }
                break; // Evita imprimir o mesmo valor repetido várias vezes
            }
        }
    }
}