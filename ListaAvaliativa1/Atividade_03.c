#include <stdio.h>
#include <math.h>
main()
{
   /* Dado três valores, A, B e C, construa um algoritmo para verificar
   se estes valores podem ser valores dos lados de um triângulo, e se for,
   se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles. */
   int a, b, c;
   printf("insira o valor de A:");
   scanf("%d", &a);
   printf("insira o valor de B:");
   scanf("%d", &b);
   printf("insira o valor de C:");
   scanf("%d", &c);

    
      if(a==b && a==c&c==b){
         printf("Triangulo equilatero pois todos os lados sao congruntes");
      }else if (a!=b && a!=c && b!=c){
         printf("Triangulo escaleno pois todos os lados sao diferentes");
      }
      else{
         printf("Triangulo isoceles ");            
      }

      return 0; 
}