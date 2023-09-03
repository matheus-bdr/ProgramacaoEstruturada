#include <stdio.h>
main()
{

   /*
   Construa um algoritmo que
    dado quatro valores, A, B, C e D, 
    o algoritmo imprima o maior e o menor valor. 
   */

    int numA, numB, numC, numD, maior, menor;
    printf("Insira um numero inteiro a: ");
    scanf("%d",&numA);
    printf("Insira um numero inteiro b: ");
    scanf("%d",&numB);
    printf("Insira um numero inteiro c: ");
    scanf("%d",&numC);
    printf("Insira um numero inteiro d: ");
    scanf("%d",&numD);

    if(numA>numB && numA>numC && numA>numD){
        maior = numA;
    }else if(numB>numA && numB>numC && numB>numD){
        maior = numB;
    }else if(numC>numA && numC>numB && numC>numD){
        maior = numC;
    }else if(numD>numA && numD>numB && numD>numC){
        maior = numD;
    }

    if(numA<numB && numA<numC && numA<numD){
        menor = numA;
    }else if(numB<numA && numB<numC && numB<numD){
        menor = numB;
    }else if(numC<numA && numC<numB && numC<numD){
        menor = numC;
    }else if(numD<numA && numD<numB && numD<numC){
        menor = numD;
    }
    printf("O maior eh: %d",maior);
    printf("\nO menor eh: %d",menor);
}