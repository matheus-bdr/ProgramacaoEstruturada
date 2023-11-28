#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa
{
    int id;
    int idade;
    char nome[20];
    struct Pessoa *prox;
} Pessoa;

Pessoa *criarListaVazia()
{
    return NULL;
}

Pessoa *criarNovaPessoa()
{
    Pessoa *novaPessoa = (Pessoa *)malloc(sizeof(Pessoa));
    // validando se tem memória
    if (novaPessoa == NULL)
    {
        printf("Memoria insuficiente");
        exit(EXIT_FAILURE);
    }
    // colocando no final da lista
    novaPessoa->prox = NULL;
    return novaPessoa;
}

Pessoa *cadastrar(Pessoa *lista)
{
    Pessoa *novaPessoa = criarNovaPessoa();
    fflush(stdin);
    // gerando ID unico e aleatorio
    novaPessoa->id = rand() % 100;
    srand(time(NULL));

    // colocando nome
    printf("\nDigite seu nome: ");
    fflush(stdin);
    fgets(novaPessoa->nome, sizeof(novaPessoa->nome), stdin);
    fflush(stdin);

    // colocando idade
    printf("\nDigite sua idade: ");
    scanf("%d", novaPessoa->idade);
    // verificando se é o primeiro elemento da lista
    if (lista == NULL)
    {
        lista = novaPessoa;
    }
    else
    {
        Pessoa *atual = lista;
        while (atual->prox != NULL)
        {
            atual = atual->prox;
        }
        atual->prox = novaPessoa;
    }
    return lista;
}

void mostrar(Pessoa *lista)
{

    Pessoa *atual = lista;
    if (atual == NULL)
    {
        printf("Lista nula");
    }
    else
    {
        while (atual != NULL)
        {
            printf("\nNome: %s", atual->nome);
            printf("\nidade: %d", atual->idade);
            printf("\nid: %d", atual->id);
            atual = atual->prox;
        }
    }
}
Pessoa *buscar(Pessoa *lista, int idBusca)
{
    Pessoa *atual = lista;
    if (atual == NULL)
    {
        printf("Lsita vazia!");
        return;
    }
    else
    {
        while (atual != NULL)
        {
            if (atual->id == idBusca)
            {
                printf("\nNome: %s", atual->nome);
                printf("\nidade: %d", atual->idade);
                printf("\nid: %d", atual->id);
                return atual;
            }
            atual = atual->prox;
        }
        printf("\nPessoa n encontrada\n");
        return NULL;
    }
}
main()
{
    Pessoa *lista = criarListaVazia();
    Pessoa *encontrada;
    int opcao, idBusca;
    do
    {
        printf("\nDigite 1 - Cadastrar uma pessoa");
        printf("\nDigite 2 - Mostrar uma pessoa");
        printf("\nDigite 3 - Buscar uma pessoa");
        printf("\nDigite 4 - Alterar uma pessoa");
        printf("\nDigite 5 - Excluir uma pessoa");
        printf("\nDigite 0 - Sair: \n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            lista = cadastrar(lista);
            break;
        case 2:
            mostrar(lista);
            break;
        case 3:
            printf("\nDigite o ID para busca: \n");
            scanf("%d", &idBusca);
            encontrada = buscar(encontrada, idBusca);
            break;
            /*      case 4:
                      alterar();
                      break;
                  case 5:
                      excluir();
                      break;
           */
        default:
            break;
        }
    } while (opcao != 0);
}