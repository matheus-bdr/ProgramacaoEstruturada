#include <stdio.h>
main()
{
    //> maior , > menor, == igual, != diferente , maior ou igual >=, menor ou igual <=

    int nota;
    printf("insira aqui a sua nota: ");
    scanf("%d", &nota);

    if(nota>=7){
        printf("Aluno aprovado");
    }else{
        printf("aluno reprovado");
    }
}
