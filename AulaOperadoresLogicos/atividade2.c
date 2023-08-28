#include <stdio.h>
main()
{
    //> maior , > menor, == igual, != diferente , maior ou igual >=, menor ou igual <=

    float salario;
    printf("insira aqui seu salario: ");
    scanf("%f", &salario);

    if(salario>1320){
        printf("vc ganha mais que o salario minimo");
    }else{
        printf("vc ganha menos que o salario minimo ");
    }
}
