#include<stdio.h>
#include<math.h>

main(){
    int vetor[50], i;

    for (i = 0; i < 50; i++) {
        vetor[i] = (i + 5 * i) % (i + 1);
    }

    for (i = 0; i < 50; i++) {
        printf("\nVETOR: %d ", vetor[i]);
    }
}