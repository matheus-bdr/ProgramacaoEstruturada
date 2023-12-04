#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Veiculo
{
    char proprietario[50];
    char modelo[50];
    char combustivel[50];
    char cor[50];
    char placa[7];
    int numeroChassi;
    int ano;
    struct Veiculo *prox; // ponteiro que armazena o endereco do proxima pessoa
} Veiculo;

Veiculo *criarListaVazia()
{
    return NULL;
}

// funcao para criar um novo registro
Veiculo *criarVeiculo()
{
    Veiculo *novoVeiculo = (Veiculo *)malloc(sizeof(Veiculo));
    if (novoVeiculo == NULL)
    {
        printf("Erro de alocacao de memoria");
        exit(EXIT_FAILURE);
    }
    novoVeiculo->prox = NULL;
    return novoVeiculo;
}
Veiculo *cadastrar(Veiculo *lista)
{
    printf("=============================================\n");
    printf("|            CADASTRAR VEICULO               |\n");
    printf("=============================================\n");
    Veiculo *novoVeiculo = criarVeiculo();

    printf("-Digite o nome do proprietario: ");
    fflush(stdin);
    fgets(novoVeiculo->proprietario, sizeof(novoVeiculo->proprietario), stdin);

    printf("-Digite o modelo do veiculo: ");
    fflush(stdin);
    fgets(novoVeiculo->modelo, sizeof(novoVeiculo->modelo), stdin);

    printf("-Digite a cor do veiculo: ");
    fflush(stdin);
    fgets(novoVeiculo->cor, sizeof(novoVeiculo->cor), stdin);

    printf("-Digite o tipo de combustivel: ");
    fflush(stdin);
    fgets(novoVeiculo->combustivel, sizeof(novoVeiculo->combustivel), stdin);

    printf("-Digite a placa do veiculo: ");
    fflush(stdin);
    fgets(novoVeiculo->placa, sizeof(novoVeiculo->placa), stdin);

    printf("-Digite o numero do chassi: ");
    scanf("%d", &novoVeiculo->numeroChassi);

    printf("-Digite o ano do carro: ");
    scanf("%d", &novoVeiculo->ano);
    // verificar se a lista é nula
    if (lista == NULL)
    {
        return novoVeiculo;
    }
    else
    {
        Veiculo *atual = lista;
        while (atual->prox != NULL)
        {
            atual = atual->prox;
            // sai da repeticao quanto encontrar o elemento que aponta pra NULL
        }
        atual->prox = novoVeiculo;
        return lista; // atualizar a lista
    }
}
void mostrarLista(Veiculo *lista)
{
    printf("=============================================\n");
    printf("|            MOSTRANDO VEICULOS              |\n");
    printf("=============================================\n");
    Veiculo *atual = lista;
    if (lista == NULL)
    {
        printf("\nLista nula\n");
        return;
    }
    else
    {
        while (atual != NULL)
        {
            printf("\n ======================");
            printf("\n- Proprietario: %s", atual->proprietario);
            printf("- Modelo: %s", atual->modelo);
            printf("- Cor: %s", atual->cor);
            printf("- Combustivel: %s", atual->combustivel);
            printf("- Placa: %s", atual->placa);
            printf("- Ano: %d", atual->ano);
            printf("\n- Numero do Chassi: %d\n", atual->numeroChassi);
            atual = atual->prox;
        }
    }
}
Veiculo *buscarVeiculo(Veiculo *lista, char idBusca)
{   
    printf("=============================================\n");
    printf("|            BUSCANDO VEICULOS               |\n");
    printf("=============================================\n");
    Veiculo *atual = lista;
    while (atual != NULL)
    {
        if (atual->placa == idBusca)
        {
            printf("\n Proprietario: %s", atual->proprietario);
            printf("\n Modelo: %s", atual->proprietario);
            printf("\n Cor: %s", atual->proprietario);
            printf("\n Combustivel: %s", atual->proprietario);
            printf("\n Placa: %s", atual->proprietario);
            printf("\n Ano: %d", atual->ano);
            printf("\n Numero do Chassi: %d", atual->numeroChassi);
            return atual;
        }
        atual = atual->prox;
    }
    printf("Pessoa nao encontrada");
    return NULL;
}

void alterar(Veiculo *veiculo)
{
    printf("=============================================\n");
    printf("|            ALTERANDO VEICULOS              |\n");
    printf("=============================================\n");

    printf("-Digite o novo nome do proprietario: ");
    fflush(stdin);
    fgets(veiculo->proprietario, sizeof(veiculo->proprietario), stdin);

    printf("-Digite o novo modelo do veiculo: ");
    fflush(stdin);
    fgets(veiculo->modelo, sizeof(veiculo->modelo), stdin);

    printf("-Digite a nova cor do veiculo: ");
    fflush(stdin);
    fgets(veiculo->cor, sizeof(veiculo->cor), stdin);

    printf("-Digite o novo tipo de combustivel: ");
    fflush(stdin);
    fgets(veiculo->combustivel, sizeof(veiculo->combustivel), stdin);

    printf("-Digite a nova placa do veiculo: ");
    fflush(stdin);
    fgets(veiculo->placa, sizeof(veiculo->placa), stdin);

    printf("-Digite o novo numero do chassi: ");
    scanf("%d", &veiculo->numeroChassi);

    printf("-Digite o novo ano do carro: ");
    scanf("%d", &veiculo->ano);
}

Veiculo *excluir(Veiculo *lista, char idBusca)
{
    printf("=============================================\n");
    printf("|            EXCLUINDO VEICULOS              |\n");
    printf("=============================================\n");
    Veiculo *atual = lista;
    Veiculo *anterior = NULL;

    while (atual != NULL && atual->placa != idBusca)
    {
        anterior = atual; // atencao, aqui a ordem de declaracao importa (esse era nosso problema na exclusao)
        atual = atual->prox;
    }
    if (atual != NULL)
    {
        if (anterior != NULL)
        {
            // exclusão alguem depois da maria
            anterior->prox = atual->prox;
        }
        else
        {
            // excluir a maria (primeiro da lista)
            lista = atual->prox;
        }
        free(atual);
        printf("Removido com sucesso");
    }
    else
    {
        printf("Veiculo nao encontrado");
    }
    return lista;
}

void liberarLista(Veiculo *lista)
{
    printf("=============================================\n");
    printf("|            LIBERANDO VEICULOS              |\n");
    printf("=============================================\n");
    Veiculo *atual = lista;
    Veiculo *prox;
    while (atual != NULL)
    {
        prox = atual->prox;
        free(atual);
        atual = prox;
    }
}

int main()
{
    int opcao;
    char idBusca;
    Veiculo *encontrada;                // armazenar a Veiculo encontrada para excluir ou alterar
    Veiculo *lista = criarListaVazia(); // sempre vai ser o primeiro da lista
    do
    {
        printf("====================================================\n");
        printf("|               Menu de Opcoes                      |\n");
        printf("====================================================\n");
        printf("|1 - Cadastrar                                      |\n");
        printf("|2 - Listar                                         |\n");
        printf("|3 - Buscar                                         |\n");
        printf("|4 - Alterar                                        |\n");
        printf("|5 - Excluir                                        |\n");
        printf("|6 - Listar proprietarios (ano >= 2010, diesel)     |\n");
        printf("|7 - Listar placas (J, 0, 2, 4, 7)                  |\n");
        printf("|8 - Listar modelo e cor (2ª letra vogal, soma par)|\n");
        printf("|9 - Trocar proprietario (chassi, sem 0 na placa)   |\n");
        printf("|0 - Sair                                           |\n");
        printf("\n ->");

        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            lista = cadastrar(lista);
            break;
        case 2:
            mostrarLista(lista);
            break;
        case 3:
            printf("Digite a placa para busca");
            fgets(idBusca, sizeof(idBusca), stdin);
            encontrada = buscarVeiculo(lista, idBusca);
            break;
        case 4:
            printf("\nDigite a placa para alteracao");
            fgets(idBusca, sizeof(idBusca), stdin);

            encontrada = buscarVeiculo(lista, idBusca);
            if (encontrada != NULL)
            {
                alterar(encontrada);
            }
            break;
        case 5:
            printf("\nDigite a placa para exclusao");
            fgets(idBusca, sizeof(idBusca), stdin);

            lista = excluir(lista, idBusca);
            break;
        case 6:
            listarProprietarios();
            break;  
        case 7:
            listarPlacas();
            break;  
        case 8:
            listarModelo();
            break;  
        case 9:
            trocarProprietario();
            break;  
        }
    } while (opcao != 0);

    liberarLista(lista);

    return 0;
}