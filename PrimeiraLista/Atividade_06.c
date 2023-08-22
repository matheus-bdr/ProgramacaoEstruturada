#include <stdio.h>

/* 6. Faça um programa em que o usuário digite o custo de uma determinada mercadoria, 
em seguida, adiciona-se ao custo o valor do frete e despesas eventuais 
(também solicitadas pelo teclado). Para concluir, o programa pergunta qual
 o valor de venda e indica a percentagem de lucro da mercadoria. */
main() {
   float numero1, numero2,numero3, valorVenda,lucro,percentual;
   printf("insira o valor do produto: ");
   scanf("%f", &numero1);
   printf("insira o custo do frete: ");
   scanf("%f", &numero2);
   printf("insira o valor das eventuais despesas: ");
   scanf("%f", &numero3);
   printf("insira o valor da venda: ");
   scanf("%f", &valorVenda);
   lucro = valorVenda - (numero1 + numero2 + numero3);
   percentual = (lucro*100)/valorVenda;

   printf(" lucro obtido:  %.2f", lucro);
   printf(" percentual de lucro obtido:  %.2f ", percentual);
   return 0;
}