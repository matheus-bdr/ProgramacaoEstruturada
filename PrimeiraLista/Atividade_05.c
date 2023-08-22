#include <stdio.h>

main() {
/* 5. Dado um valor em reais e a cotação do dólar, converta esse valor para dólares. */
   float valor;
   printf("digite aqui quantos reais voce quer converter: ");
   scanf("%f", &valor);

   valor = valor / 4.98;

   printf("tendo em vista que o dolar hoje esta 4,98, o valor de reais equivalentes a %.2f",valor);
   return 0;
}