#include <stdio.h>

main() {
/* 7. Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área.  */   
   float pi = 3.14;
   float raio, area;
   printf("insira o raio: ");
   scanf("%f", &raio);

   area = pi*(raio*raio);
   printf("sua area eh:  %.2f",area);
   return 0;
}