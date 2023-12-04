#include <stdio.h>

int main() {
    int v[10];
    int v1[10];
    int v2[10];

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    int count_v1 = 0;
    int count_v2 = 0;

    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 != 0) {
            v1[count_v1] = v[i];
            count_v1++;
        } else {
            v2[count_v2] = v[i];
            count_v2++;
        }
    }

    printf("\nElementos utilizados de v1:\n");
    for (int i = 0; i < count_v1; i++) {
        printf("%d ", v1[i]);
    }

    printf("\nElementos utilizados de v2:\n");
    for (int i = 0; i < count_v2; i++) {
        printf("%d ", v2[i]);
    }
}