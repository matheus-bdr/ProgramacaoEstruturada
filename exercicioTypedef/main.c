#include<stdio.h>
#define  MAX 3 //CONSTANTE TAMANHO VETOR

//registro
typedef struct{
    char nome[20];
    int idade;
    int id;
    int status;
}Aluno;
//srand(time(0)) p[indice].id = rand()% 100;
void cadastrar(Aluno a[], int indice){
    a[indice].id = indice + 1; // vai criar um numero aleatorio de 0 ate 10
    a[indice].status = 1; //todos ja entram com o status ativado
    printf("\n--------------------------");
    printf("\n         CADASTRO         \n");
    printf("\nDigite o nome do aluno: ");
    fflush(stdin);
    fgets(a[indice].nome, sizeof(a[indice].nome), stdin);
    fflush(stdin);
    printf("Digite a idade: ");

    fflush(stdin);
    scanf("%d", &a[indice].idade);
}

void listarAlunos(Aluno a[], int indice){
    printf("\n--------------------------");
    printf("\n        LISTAGEM       \n");
    if (indice == 0){
        printf("\nNenhum registro encontrado!");
    }else{
        for(int i = 0; i < indice; i++){
            printf("\nID: %d", a[i].id);
            printf("\nNome: %s", a[i].nome);
            printf("Idade: %d\n", a[i].idade);
            if (a[i].status == 1){
                printf("Status: Ativado");
            }else{
                 printf("Status: Desativado");
            }
        }
    }  
}

//status
void listarEspecifico(Aluno a[], int indice){
    int escolha;
    printf("\n--------------------------");
    printf("\n        LISTAGEM       \n");
    if (indice == 0){
        printf("\nNenhum registro encontrado!");
    }else{
        printf("1 - Ativados \n2 - Desativados \n3 - Todos \n");
        fflush(stdin);
        printf("OPCAO: ");
        fflush(stdin);
        scanf("%d", &escolha);
        fflush(stdin);
        switch(escolha){
            case 1:
                for(int i = 0; i < indice; i++){
                    if(a[i].status == 1){
                        printf("\nID: %d", a[i].id);
                        printf("\nNome: %s", a[i].nome);
                        printf("Idade: %d\n", a[i].idade);
                        printf("Status: %d\n", a[i].status);
                    }
                }
                break;
            case 2:
                for(int i = 0; i < indice; i++){
                    if(a[i].status == 0){
                        printf("\nID: %d", a[i].id);
                        printf("\nNome: %s", a[i].nome);
                        printf("Idade: %d\n", a[i].idade);
                        printf("Status: %d\n", a[i].status);
                    }
                }
                break;
            case 3:
                listarAlunos(a, indice);
                break;
        }
    }  
}

void buscar(Aluno a[], int indice, int idBuscar){
    printf("\n--------------------------");
    printf("\n         BUSCA         \n");
    for(int i = 0; i < indice; i++){
        if (idBuscar == a[i].id){
            printf("\nID: %d", a[i].id);
            printf("\nNome: %s", a[i].nome);
            printf("Idade: %d", a[i].idade);
            return;
        }
    }
    printf("Registro nao cadastrado!");
}
//https://wagnergaspar.com/procurando-caracteres-em-uma-string-com-as-funcoes-strchr-e-strrchr/
void alterar(Aluno a[], int indice, int idBuscar){
    int opcao;
    printf("\n--------------------------");
    printf("\n         ALTERACAO         \n");
    for(int i = 0; i < indice; i++){
        if (idBuscar == a[i].id){
            printf("\nID: %d", a[i].id);
            printf("\nNome: %s", a[i].nome);
            printf("Idade: %d", a[i].idade);
            printf("\n------------------------\n");
            printf("1 - Alterar nome \n2 - Alterar idade \n3 - Alterar status \n4 - Alterar todos\n");
            fflush(stdin);
            printf("OPCAO: ");
            fflush(stdin);
            scanf("%d", &opcao);
            fflush(stdin);
            if (opcao == 1){
                printf("ALTERACAO DO NOME:");
                fgets(a[i].nome, sizeof(a[i].nome), stdin);
                fflush(stdin);
            }else if(opcao == 2){
                printf("ALTERACAO DA IDADE:");
                scanf("%d", &a[i].idade);
                fflush(stdin);
            }else if(opcao == 3){
                printf("ALTERACAO DO STATUS:");
                scanf("%d", &a[i].status);
                fflush(stdin);
            }else if(opcao == 4){
                printf("ALTERACAO DO NOME:");
                fgets(a[i].nome, sizeof(a[i].nome), stdin);
                printf("ALTERACAO DA IDADE:");
                scanf("%d", &a[i].idade);
                printf("ALTERACAO DO STATUS:");
                scanf("%d", &a[i].status);
                fflush(stdin);
            }else{
                printf("Opcao invalida!");
            }
            return;
        }
    }
    printf("Registro nao cadastrado!");
}

void excluir(Aluno a[], int indice, int idBuscar){
    printf("\n--------------------------");
    printf("\n         EXCLUSAO       \n");
    for(int i = 0; i < indice; i++){
        if (idBuscar == a[i].id){
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

    Aluno a[MAX];
    int totalCadastros = 0, opcao, id;
    char decisao;

    //repetir o MENU
    do{
        printf("\n======== OPCOES ========\n");
        printf("1 -- Cadastrar");
        printf("\n2 -- Listar");
        printf("\n3 -- Buscar");
        printf("\n4 -- Alterar");
        printf("\n5 -- Excluir");
        printf("\n0 -- Sair");
        printf("\nDigite a opcao escolhida: ");
        scanf("%d", &opcao);

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
                    //opcao = 0; //sair do sistema
                }
                break;
            case 2:
                listarEspecifico(a, totalCadastros);
                printf("\n");
                printf("\n--------------------------\n");
                break;
            case 3:
                printf("Digite o id que deseja buscar: ");
                scanf("%d", &id);
                buscar(a, totalCadastros, id);
                printf("\n--------------------------\n");
                break;
            case 4:
                printf("Digite o id que deseja alterar: ");
                scanf("%d", &id);
                alterar(a, totalCadastros, id);
                printf("\n--------------------------\n");
                break;
            case 5:
                printf("Digite o id que deseja excluir: ");
                scanf("%d", &id);
                fflush(stdin);
                printf("Deseja realmente excluir? s / n\n");
                scanf("%c", &decisao);
                if (decisao == 's'){
                    excluir(a, totalCadastros, id);
                    totalCadastros--;
                    printf("\n--------------------------\n");
                }else{
                    printf("Exclusao Cancelada!");
                    printf("\n--------------------------\n");
                }
                break;
        }
    }while(opcao != 0);
}