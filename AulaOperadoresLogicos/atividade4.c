#include <stdio.h>
main()
{
    //> maior , > menor, == igual, != diferente , maior ou igual >=, menor ou igual <=

    float peso;
    printf("insira aqui seu peso: ");
    scanf("%f", &peso);

    if(peso<60){
        printf("coma mais");
    }else{
        printf("coma menos");
    }
}
