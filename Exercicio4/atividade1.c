#include <stdio.h>
 #include <math.h>
main()
{

    // Escreva um algoritmo que leia um número e imprima 
    //a raiz quadrada do número caso ele seja positivo ou igual a
    //zero e o quadrado do número caso ele seja negativo.
    int numero;
    printf("Insira um numero inteiro: ");
    scanf("%d",&numero);

    if(numero >= 0){
        numero =  sqrt(numero);
        printf("seu numero eh %d", numero);
    }else{
         numero = numero *numero;
        printf("seu numero eh %d", numero);
    }
}