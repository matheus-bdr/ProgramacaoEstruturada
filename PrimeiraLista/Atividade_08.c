#include <stdio.h>

/* 8. Faça um algoritmo que leia a idade de uma 
pessoa expressa em anos, meses e dias e escreva a 
idade dessa pessoa expressa apenas em dias.
Considerar ano com 365 dias e mês com 30 dias. */
main() {
   int idadeAno,idadeMes,idadeDia, idadeDiasTotal;
   printf("insira aqui quantos anos voce tem: ");
   scanf("%d", &idadeAno);
   printf("alem da sua idade, digite a quantidade de meses que voce tem ");
   scanf("%d", &idadeMes);
   printf("alem da sua idade, digite a quantidade de dias que voce tem: ");
   scanf("%d", &idadeDia);

   idadeAno= idadeAno*365;
   idadeMes= idadeMes*30;
   idadeDiasTotal = idadeAno+idadeDia+idadeMes;
   printf("voce tem %d dias vivo!", idadeDiasTotal);
   return 0;
}