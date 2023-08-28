#include <stdio.h>
main()
{
    //> maior , > menor, == igual, != diferente , maior ou igual >=, menor ou igual <=

    int idade;
    printf("insira aqui a sua idade: ");
    scanf("%d", &idade);

    if(idade>18){
        printf("Sua idade é maior que 18");
    }else{
        printf("sua idade nao e maior ");
    }
}
