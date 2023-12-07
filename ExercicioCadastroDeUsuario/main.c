/* Implemente um algoritmo que:

Inclua até 1000 usuários;
Edite um usuário;
Exclua um usuário;
Busque um usuário pelo e-mail;
Imprima todos os usuários cadastrados;


Obrigatório uso de struct, vetor e função. 

Obrigatório uso de switch case com char para escolha da opção desejada.

ATENÇÃO: (1) NA CRIAÇÃO DE NOMES DE IDENTIFICADORES; (2) NOS TEXTOS DE INTERAÇÃO COM USUÁRIOS – ENTRADA E SAÍDA; (3) NA ORGANIZAÇÃO DO CÓDIGO.

Dados do usuário:

Id (int) => preenchido automaticamente por números randômicos e não podem ser repetir.
Nome completo (string)
Email (string) => validação do campo: verificar se o caractere "@" aparece
Sexo (string) => validação do campo: aceitar somente as palavras Feminino, Masculino e Indiferente.
Endereço (string)
Altura (double) => validação do campo: aceitar valores entre 1 e 2 m.
Vacina (int) => validação de 1 para sim e 0 para não 
Individual 
strcmp -- string igual?
strchr -- existe caractere?*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define  MAX 3 

//registro
typedef struct{
    int id;
    char nomeCompleto[20];
    char email[50];
    char sexo[20];
    char endereco[50];
    double altura;
    int vacina;
}Usuario;

void limparBuffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF);
}

void cadastrar(Usuario a[], int indice){
    int achou;
    int opcaoVacina;
    
    //id automatico
    srand(time(NULL));
    a[indice].id = rand() % 100;
    fflush(stdin);
    printf("\n--------------------------");
    printf("\n         CADASTRO         \n");
    printf("\nPreencha os campos abaixo:");
    printf("\nNome completo: ");
    fgets(a[indice].nomeCompleto, sizeof(a[indice].nomeCompleto), stdin);
    fflush(stdin);
    limparBuffer();

    //VALIDACAO PARA O CAMPO EMAIL
        do{
            printf("Email: ");
            fflush(stdin);
            fgets(a[indice].email, sizeof(a[indice].email), stdin);
            fflush(stdin);
            if(strchr(a[indice].email, '@') == NULL){
                printf("\nATENCAO: Email invalido... tente novamente! (Exemplo: xxxx@gmail.com)\n");
                fflush(stdin);
                achou = 0;
            }else{
                achou = 1;
            } 
        }while(achou == 0);

    //VALIDACAO PARA O CAMPO SEXO
        do{
            printf("Sexo (Feminino, Masculino e Indiferente): ");
            fflush(stdin);
            fgets(a[indice].sexo, sizeof(a[indice].sexo), stdin);
            fflush(stdin);
            a[indice].sexo[strcspn(a[indice].sexo, "\n")] = '\0';    // Removendo caracteres de nova linha (\n) do final da entrada
            if(strcmp(a[indice].sexo, "Feminino") != 0 && strcmp(a[indice].sexo, "Masculino") != 0 && strcmp(a[indice].sexo, "Indiferente") != 0){
                printf("\nATENCAO: Entrada invalida... tente novamente!\n\n");
                fflush(stdin);
                achou = 0;
            }else{
                achou = 1;
            }
        }while(achou == 0);
    printf("Endereco: ");
    fflush(stdin);
    fgets(a[indice].endereco, sizeof(a[indice].endereco), stdin);
    fflush(stdin);

    //VALIDACAO PARA O CAMPO ALTURA
        do{
            printf("Altura (1m a 2m): ");
            fflush(stdin);
            scanf("%lf", &a[indice].altura);
            if(a[indice].altura < 1 || a[indice].altura > 2){
                printf("\nATENCAO: Entrada invalida... tente novamente!\n\n");
                fflush(stdin);
                achou = 0;
            }else{
                achou = 1;
            }
        }while(achou == 0);
    
    //VALIDACAO PARA O CAMPO VACINA
        do{
            printf("Vacina -> 1 - sim / 0 - nao: ");
            fflush(stdin);
            scanf("%d", &a[indice].vacina);
            if (a[indice].vacina != 1 && a[indice].vacina != 0) {
                printf("\nATENCAO: Entrada invalida... tente novamente!\n\n");
                opcaoVacina = 0;
            } else {
                opcaoVacina = 1;
            }
        }while(opcaoVacina == 0);
}


void listarUsuarios(Usuario a[], int indice){
    printf("\n--------------------------");
    printf("\n  USUARIOS CADASTRADOS    \n");
    if (indice == 0){
        printf("\nNenhum registro encontrado!");
    }else{
        for(int i = 0; i < indice; i++){
            printf("\nID: %d", a[i].id);
            printf("\nNome Completo: %s", a[i].nomeCompleto);
            printf("Email: %s", a[i].email);
            printf("Sexo: %s\n", a[i].sexo);
            printf("Endereco: %s", a[i].endereco);
            printf("Altura: %.2lf metros\n", a[i].altura);
            if (a[i].vacina == 1){
                printf("Vacina: SIM");
                printf("\n");
            }else{
                printf("Vacina: NAO");
                printf("\n");
            }
        }
    }  
}

void buscar(Usuario a[], int indice, char emailBusca[]){
    for(int i = 0; i < indice; i++){
        if (strcmp(a[i].email, emailBusca) == 0){
            printf("\nID: %d", a[i].id);
            printf("\nNome Completo: %s", a[i].nomeCompleto);
            printf("Email: %s", a[i].email);
            printf("Sexo: %s\n", a[i].sexo);
            printf("Endereco: %s", a[i].endereco);
            printf("Altura: %.2lf metros\n", a[i].altura);
            if (a[i].vacina == 1){
                printf("Vacina: SIM");
                printf("\n");
            }else{
                printf("Vacina: NAO");
                printf("\n");
            }
            return;
        }else {
            printf("Registro nao cadastrado!");
        }
    }
}

void editar(Usuario a[], int indice, char emailBusca[]){
    int opcaoVacina;
    int achou;
    for(int i = 0; i < indice; i++){
        if (emailBusca == a[i].email){
            printf("\nID: %d", a[i].id);
            printf("\nNome Completo: %s", a[i].nomeCompleto);
            printf("Email: %s", a[i].email);
            printf("Sexo: %s\n", a[i].sexo);
            printf("Endereco: %s", a[i].endereco);
            printf("Altura: %.2lf metros\n", a[i].altura);
            if (a[i].vacina == 1){
                printf("Vacina: SIM");
                printf("\n");
            }else{
                printf("Vacina: NAO");
                printf("\n");
            }
            printf("\n------------------------\n");
            printf("\nALTERACAO DOS DADOS CADASTRAIS\n");
            printf("\nNome completo: ");
            fflush(stdin);
            fgets(a[indice].nomeCompleto, sizeof(a[indice].nomeCompleto), stdin);
            fflush(stdin);

    //VALIDACAO PARA O CAMPO EMAIL
        do{
            printf("\nEmail: ");
            fflush(stdin);
            fgets(a[indice].email, sizeof(a[indice].email), stdin);
            fflush(stdin);
            if(strchr(a[indice].email, '@') == NULL){
                printf("\nATENCAO: Email invalido... tente novamente! (Exemplo: xxxx@gmail.com)\n");
                fflush(stdin);
                achou = 0;
            }else{
                achou = 1;
            } 
        }while(achou == 0);

    //VALIDACAO PARA O CAMPO SEXO
        do{
            printf("Sexo (Feminino, Masculino e Indiferente): ");
            fflush(stdin);
            fgets(a[indice].sexo, sizeof(a[indice].sexo), stdin);
            fflush(stdin);
            a[indice].sexo[strcspn(a[indice].sexo, "\n")] = '\0';    // Removendo caracteres de nova linha (\n) do final da entrada
            if(strcmp(a[indice].sexo, "Feminino") != 0 && strcmp(a[indice].sexo, "Masculino") != 0 && strcmp(a[indice].sexo, "Indiferente") != 0){
                printf("\nATENCAO: Entrada invalida... tente novamente!\n\n");
                fflush(stdin);
                achou = 0;
            }else{
                achou = 1;
            }
        }while(achou == 0);
    printf("Endereco: ");
    fflush(stdin);
    fgets(a[indice].endereco, sizeof(a[indice].endereco), stdin);
    fflush(stdin);

    //VALIDACAO PARA O CAMPO ALTURA
        do{
            printf("Altura (1m a 2m): ");
            fflush(stdin);
            scanf("%lf", &a[indice].altura);
            if(a[indice].altura < 1 || a[indice].altura > 2){
                printf("\nATENCAO: Entrada invalida... tente novamente!\n\n");
                fflush(stdin);
                achou = 0;
            }else{
                achou = 1;
            }
        }while(achou == 0);
    
    //VALIDACAO PARA O CAMPO VACINA
        do{
            printf("Vacina -> 1 - sim / 0 - nao: ");
            fflush(stdin);
            scanf("%d", &a[indice].vacina);
            if (a[indice].vacina != 1 && a[indice].vacina != 0) {
                printf("\nATENCAO: Entrada invalida... tente novamente!\n\n");
                opcaoVacina = 0;
            } else {
                opcaoVacina = 1;
            }
        }while(opcaoVacina == 0);

         
        }
    }
    printf("Registro nao cadastrado!");
}

void excluir(Usuario a[], int indice, char emailBusca[]){
    printf("\n--------------------------");
    printf("\n         EXCLUSAO       \n");
    for(int i = 0; i < indice; i++){
        if (emailBusca == a[i].email){
            for(int j = i; j < indice - 1; j++){
                a[j] = a[j + 1];
            }
            printf("Excluido com sucesso!");
            return;
        }
    }
    printf("Registro nao encontrado!");
}

main(){

    Usuario a[MAX];
    int totalCadastros = 0, opcao;
    char email[50];

    //repetir o MENU
    do{
        printf("\n======== OPCOES ========\n");
        printf("1 -- Cadastrar");
        printf("\n2 -- Listar");
        printf("\n3 -- Buscar");
        printf("\n4 -- editar");
        printf("\n5 -- Excluir");
        printf("\n0 -- Sair");
        printf("\nDigite a opcao escolhida: ");
        scanf("%d", &opcao);
        fflush(stdin);

        switch(opcao){
            case 1:
                //if para fazer com que sejam cadastrados so a quantidade que o vetor suporta
                if(totalCadastros < MAX){
                    cadastrar(a, totalCadastros);
                    totalCadastros++;
                    printf("\nCadastro realizado com sucesso!\n");
                    printf("\n--------------------------\n");
                }else{
                    printf("\nCapacidade maxima de cadastros atingidas!");
                    printf("\n--------------------------\n");
                    printf("\n");
                    opcao = 0; //sair do sistema
                }
                break;
            case 2:
                listarUsuarios(a, totalCadastros);
                printf("\n");
                printf("\n--------------------------\n");
                break;
            
            case 3:
                printf("\n--------------------------");
                printf("\n         BUSCAR         \n");
                fflush(stdin);
                printf("Digite o email do usuario que deseja buscar: ");
                fflush(stdin);
                fgets(email, sizeof(email), stdin);
                fflush(stdin);
                buscar(a, totalCadastros, email);
                printf("\n--------------------------\n");
                break;
            
            case 4:
                printf("\n--------------------------");
                printf("\n         EDITAR         \n");
                printf("Digite o email do usuario que deseja editar: ");
                fflush(stdin);
                fgets(email, sizeof(email), stdin);
                fflush(stdin);
                editar(a, totalCadastros, email);
                printf("\n--------------------------\n");
                break;
                
            case 5:
                printf("\n--------------------------");
                printf("\n         EXCLUIR        \n");
                printf("Digite o email do usuario que deseja excluir: ");
                fflush(stdin);
                fgets(email, sizeof(email), stdin);
                fflush(stdin);
                excluir(a, totalCadastros, email);
                totalCadastros--;
                printf("\n--------------------------\n");
                break;
        }
    }while(opcao != 0);
}