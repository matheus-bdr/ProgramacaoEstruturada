#include<stdio.h>

int soma(int n1, int n2); 

main(){
    int a, b;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    mostraMaior(a, b); 
    
}

int mostraMaior(int a, int b){
    
    if(a>b){
        printf("a eh o maior valor");
    }else if(a==b){
        printf("Valores iguais");
    }else{
        printf("b eh o maior valor");
        
    }
}