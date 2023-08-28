#include <stdio.h>
main()
{
    //> maior , > menor, == igual, != diferente , maior ou igual >=, menor ou igual <=

    float nota;
    printf("insira aqui a sua media final: ");
    scanf("%f", &nota);

    if(nota>=7){
        printf("Aluno aprovado");
    }else if(nota>=4 && nota<=6.9){
        printf("aluno de recuperacao");
    }else{printf("Aluno de recu");}
}
