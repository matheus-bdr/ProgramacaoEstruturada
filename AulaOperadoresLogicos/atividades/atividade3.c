#include <stdio.h>
main()
{
    //> maior , > menor, == igual, != diferente , maior ou igual >=, menor ou igual <=

    float altura;
    printf("insira aqui sua altura: ");
    scanf("%f", &altura);

    if(altura>1.80){
        printf("vc e grandao");
    }else{
        printf("vc nao e grandao ");
    }
}
