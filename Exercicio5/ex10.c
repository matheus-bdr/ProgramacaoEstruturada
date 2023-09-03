#include <stdio.h>
 #include <math.h>
main()
{
    int a,b,c;
    float delta,x,x1,x2;
    printf("insira aqui o valor de A: ");
    scanf("%d",&a);
    printf("insira aqui o valor de b: ");
    scanf("%d",&b);
    printf("insira aqui o valor de c: ");
    scanf("%d",&c);
    if(a==0){
        printf("Equacao de segundo grau nao podeter 0 como A");
    }
    delta = (b*b)-(4*a*c);
    if(delta<0){printf("nao existe raiz");
    }else if(delta ==0){
        x = (b*-1 + sqrt(delta))/2*a;
        printf("so temos um resultado na equacao: %f",x);
    }else if (delta>0){
        x1 = (b*-1 + sqrt(delta))/2*a;
        x2 = (b*-1 - sqrt(delta))/2*a;
        printf(" Os resultados sao: %f, %f",x1,x2);
    }

}
