#include <stdio.h>
#include <string.h>
//definição da struct/registro
struct pessoa{ 
        char nome[50];
        int idade;
        int cpf;
        float salario;
    };

//outra forma de declarar uma struct
    typedef struct 
    {
        char rua[20];
        int numero;
    }Endereco;
    


main()
{
    //criar uma variavel do tipo da struct 
    struct pessoa p1;
    Endereco end;
    
    // inserindo dados no registro 
    strcpy(p1.nome,"bedao");
    p1.idade = 18;
    p1.cpf = 101001;
    p1.salario = 1800.00;

    //mostrando valores 
    printf("\n nome: %s", p1.nome);
    printf("\n idade: %d", p1.idade);
    printf("\n cpf: %d", p1.cpf);
    printf("\n salario: %f", p1.salario);
    

    //usuario inserindo dados
    printf("Digite a rua: ");
    fgets(end.rua,sizeof(end.rua),stdin);

    printf("Digite o numero: ");
    scanf("%d",&end.numero);
    fflush(stdin);
    printf("\n Rua: %s",end.rua);
    printf("\n Numero: %d", end.rua);
}
