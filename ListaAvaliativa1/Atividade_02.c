#include <stdio.h>
#include <math.h>
main()
{
   /* Chico tem 1,50 metro e cresce 2 centímetros por ano, 
   enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. 
   Construa um algoritmo que calcule e imprima quantos anos 
   serão necessários para que Zé seja maior que Chico */

   float alturaChico=1.50, alturaZe=1.10,  crescimentoChico = 0.02,crescimentoZe = 0.03;
   int i=0,valor=100;
   for (i=0;i<valor;i++){
      if(alturaChico>=alturaZe){
         alturaChico = alturaChico+crescimentoChico;
         alturaZe = alturaZe+crescimentoZe;
      }else
      {
         break;
      }
   }
      printf("quantidade de anos para ze ser maior que chico: %d", i);

   
   return 0;
}