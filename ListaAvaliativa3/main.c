#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Produto
{
    char descricao[50];
    // int id;
    int codigo;
    int quantidade;
    float valorProduto;
    struct Produto *prox; // ponteiro que armazena o endereco do proxima pessoa
} Produto;

Produto *criarListaVazia()
{
    return NULL;
}

// funcao para criar um novo registro
Produto *criarProduto()
{
    Produto *novoProduto = (Produto *)malloc(sizeof(Produto));
    if (novoProduto == NULL)
    {
        printf("Erro de alocacao de memoria");
        exit(EXIT_FAILURE);
    }
    novoProduto->prox = NULL;
    return novoProduto;
}
Produto *cadastrar(Produto *lista)
{
    // srand(time(NULL));
    Produto *novoProduto = criarProduto();
    // novoProduto->id = rand() % 100;

    printf("Digite a descricao do produto: ");
    fflush(stdin);
    fgets(novoProduto->descricao, sizeof(novoProduto->descricao), stdin);

    printf("Digite a quantidade do produto: ");
    scanf("%d", &novoProduto->quantidade);

    printf("Digite o codigo do produto: ");
    scanf("%d", &novoProduto->codigo);

    printf("Digite o valor do produto: ");
    scanf("%f", &novoProduto->valorProduto);
    // verificar se a lista é nula
    if (lista == NULL)
    {
        return novoProduto;
    }
    else
    {
        Produto *atual = lista;
        while (atual->prox != NULL)
        {
            atual = atual->prox;
            // sai da repeticao quanto encontrar o elemento que aponta pra NULL
        }
        atual->prox = novoProduto;
        return lista; // atualizar a lista
    }
}
void mostrarLista(Produto *lista)
{
    Produto *atual = lista;
    if (lista == NULL)
    {
        printf("\nLista nula\n");
        return;
    }
    else
    {
        while (atual != NULL)
        {
            // printf("\nId: %d", atual->id);
            printf("\nDescricao: %s", atual->descricao);
            printf("Quantidade: %d", atual->quantidade);
            printf("\nCodigo: %d", atual->codigo);
            printf("\nValor: %f", atual->valorProduto);
            printf("\n");
            atual = atual->prox;
        }
    }
}
Produto *buscarProduto(Produto *lista, int idBusca)
{
    Produto *atual = lista;
    while (atual != NULL)
    {
        if (atual->codigo == idBusca)
        {
            // printf("\nId: %d", atual->id);
            printf("\nDescricao: %s", atual->descricao);
            printf("Quantidade: %d", atual->quantidade);
            printf("\nCodigo: %d", atual->codigo);
            printf("\nValor: %f", atual->valorProduto);
            return atual;
        }
        atual = atual->prox;
    }
    printf("Produto nao encontrado");
    return NULL;
}

void alterar(Produto *produto)
{
    printf("\nDigite a nova descricao: ");
    fflush(stdin);
    fgets(produto->descricao, sizeof(produto->descricao), stdin);
    fflush(stdin);

    printf("\nDigite a quantidade de produtos comprados: ");
    fflush(stdin);
    scanf("%d", &produto->quantidade);

    printf("\nDigite o valor: ");
    fflush(stdin);
    scanf("%f", &produto->valorProduto);
}

Produto *excluir(Produto *lista, int idBusca)
{
    Produto *atual = lista;
    Produto *anterior = NULL;

    while (atual != NULL && atual->codigo != idBusca)
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
        printf("Produto removido com sucesso");
    }
    else
    {
        printf("Produto nao encontrado");
    }
    return lista;
}

void liberarLista(Produto *lista)
{
    Produto *atual = lista;
    Produto *prox;
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
    int idBusca;
    Produto *encontrada;                // armazenar a pessoa encontrada para excluir ou alterar
    Produto *lista = criarListaVazia(); // sempre vai ser o primeiro da lista
    do
    {
        printf("\n=========================");
        printf("\n  Menu de Opcoes");
        printf("\n=========================");
        printf("\n1 - Cadastrar");
        printf("\n2 - Mostrar");
        printf("\n3 - Buscar");
        printf("\n4 - Alterar");
        printf("\n5 - Excluir");
        printf("\n0 - Sair");
        printf("\n=========================");
        printf("\nDigite sua opcao: ");
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
            printf("Digite o id para busca: ");
            scanf("%d", &idBusca);
            encontrada = buscarProduto(lista, idBusca);
            break;
        case 4:
            printf("\nDigite o id para alteracao: ");
            scanf("%d", &idBusca);
            encontrada = buscarProduto(lista, idBusca);
            if (encontrada != NULL)
            {
                alterar(encontrada);
            }
            break;
        case 5:
            printf("\nDigite o id para exclusao: ");
            scanf("%d", &idBusca);
            lista = excluir(lista, idBusca);
            break;
        }
        if (opcao > 5)
        {
            printf("\n--------------------------\n");
            printf("Opcao invalida! \nDIGITE NOVAMENTE");
            printf("\n--------------------------\n");
        }
    } while (opcao != 0);
    printf("\n-------------------------------------\n");
    printf("Usuario saiu do programa, volte sempre!");
    printf("\n-------------------------------------\n");
    liberarLista(lista);

    return 0;
}