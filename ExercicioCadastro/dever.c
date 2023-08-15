#include <stdio.h>
main()
{

    char nome[30];
    int idade;
    char matricula[30];
    char endereco[30];
    char curso[30];
    char periodo[30];
    char diciplinas[30];
    float valorDaMensalidade;
    
    printf("insira um nome: ");
    fgets(nome,30,stdin);
    fflush(stdin);

    printf("_________________\n");

    printf("insira uma idade: ");
    fgets(idade,30,stdin);
    fflush(stdin);

    printf("_________________\n");

    printf("insira sua matricula: ");
    fgets(matricula,30,stdin);
    fflush(stdin);

    printf("_________________\n");

    printf("insira um endereco: ");
    fgets(endereco,30,stdin);
    fflush(stdin);

    printf("_________________\n");

    printf("insira um curso: ");
    fgets(curso,30,stdin);
    fflush(stdin);

    printf("_________________\n");

    printf("insira um periodo: ");
    fgets(periodo,30,stdin);
    fflush(stdin);

    printf("_________________\n");

    printf("insira um diciplinas: ");
    fgets(diciplinas,30,stdin);
    fflush(stdin);

    printf("_________________\n");

    printf("insira o valor da sua Mensalidade: ");
    scanf("%f",&valorDaMensalidade);
    fflush(stdin);


    printf("nome : %s", nome);
    printf("idade : %d", idade);
    printf("matricula : %s", matricula);
    printf("endereco : %s", endereco);
    printf("curso : %s", curso);
    printf("periodo : %s", periodo);
    printf("diciplinas : %s", diciplinas);
    printf("valorDaMensalidade : %.2f", valorDaMensalidade);
    
   
}


 