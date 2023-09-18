#include <stdio.h>
 #include <math.h>
main()
{
    /* 5. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. */
    int i=1, resultado;

    while(i<=50){
        if(i%2==0){
            printf("\n numero: %d", i);
            resultado = resultado+i;
            i++;
        }
        i++;
    }
    printf("\n resultado: %d", resultado);
}