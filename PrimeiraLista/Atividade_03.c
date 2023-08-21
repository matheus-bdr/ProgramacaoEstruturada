#include <stdio.h>

main() {
/* 3. Dadas as medidas de uma sala, informe sua área. */
   float comprimento, largura , area;

   printf(" insira aqui a seu comprimento: ");
   scanf("%f",&comprimento);
   
   printf(" insira aqui a sua altura: ");
   scanf("%f",&largura);

   area = comprimento * largura;

   printf("A area da sua sala eh: %.2f", area);
   return 0;
}

