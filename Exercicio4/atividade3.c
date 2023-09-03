#include <stdio.h>
main()
{

   /*
   Dados três valores A, B e C, construa um algoritmo, 
   que imprima os valores de forma ascendente (do menor para o maior)
   */
   int a, b, c, num1,num2,num3;
    printf("Insira um numero inteiro a: ");
    scanf("%d",&a);
    printf("Insira um numero inteiro b: ");
    scanf("%d",&b);
    printf("Insira um numero inteiro c: ");
    scanf("%d",&c);

    if(a>b && a>c){
        num1 = a;
    }else if(b>a && b>c){
        num1 = b;
    }else if(c>a && c>b){
        num1 = c;
    }
    
    if(a<b && a<c){
        num3 = a;
    }else if(b<a && b<c){
        num3 = b;
    }else if(c<a && c<b){
        num3 = c;
    }

    if(a<num1 && a>num3 ){
        num2 = a;
    }else if(b<num1 && b>num3 ){
        num2 = b;
    }else if(c<num1 && c>num3 ){
        num2 = c;
    }

    printf("OS numeros em forma crescente sao: %d",num3);
    printf(" %d",num2);
    printf(" %d",num1);
    
    
}