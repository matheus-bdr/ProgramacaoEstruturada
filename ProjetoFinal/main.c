#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
typedef struct Veiculo
{
    char proprietario[50];
    char combustivel[20];
    char modelo[20];
    char cor[20];
    int chassi;
    char placa[7];
    int ano;
    struct Veiculo *prox;
} Veiculo;

void limparBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

Veiculo *criarListaVazia()
{
    return NULL;
}

Veiculo *criarVeiculo()
{
    Veiculo *novoVeiculo = (Veiculo *)malloc(sizeof(Veiculo));
    if (novoVeiculo == NULL)
    {
        printf("\nNão foi possivel alocar memoria!");
        exit(EXIT_FAILURE);
    }
    novoVeiculo->prox = NULL;
    return novoVeiculo;
}

// VALIDACAO DO COMBUSTIVEL
Veiculo *verificarCombustivel(Veiculo *novo)
{
    char tipo1[] = "Diesel";
    char tipo2[] = "Gasolina";
    char tipo3[] = "Etanol";
    Veiculo *novoVeiculo = novo;
    fflush(stdin);
    printf("TIPO DE COMBUSTIVEL (Diesel, Gasolina ou Etanol): ");
    fflush(stdin);
    scanf("%s", novoVeiculo->combustivel);
    fflush(stdin);
    if (strcmp(novoVeiculo->combustivel, tipo1) != 0 && strcmp(novoVeiculo->combustivel, tipo2) != 0 && strcmp(novoVeiculo->combustivel, tipo3) != 0)
    {
        printf("\nCombustivel invalido, tente novamente!\n\n");
        return verificarCombustivel(novo);
    }
    else
    {
        return novoVeiculo;
    }
}

// VALIDACAO DA PLACA
Veiculo *verificarPlaca(Veiculo *novo)
{
    Veiculo *novoVeiculo = novo;
    printf("-Digite a placa do veiculo: ");
    scanf("%s", novoVeiculo->placa);
    limparBuffer();
    if (strlen(novoVeiculo->placa) != 7)
    {
        printf("\nPlaca invalida, tente novamente!\n\n");
        return verificarPlaca(novo);
    }

    for (int i = 0; i < 3; i++)
    {
        if (!isalpha(novoVeiculo->placa[i]))
        {
            printf("Placa invalida, tente novamente!");
            return verificarPlaca(novo);
        }
    }

    // Verifica se os quatro ultimos sao numeros (ISDIGIT)
    for (int i = 3; i < 7; i++)
    {
        if (!isdigit(novoVeiculo->placa[i]))
        {
            printf("placa invalida, tente novamente!");
            return verificarPlaca(novo);
        }
    }
    return novoVeiculo;
}

// CADASTRAR
Veiculo *cadastrarVeiculo(Veiculo *lista)
{
    Veiculo *novoVeiculo = criarVeiculo();
    limparBuffer();

    printf("=============================================\n");
    printf("|            CADASTRAR VEICULO               |\n");
    printf("=============================================\n");

    printf("-Digite o nome do proprietario: ");
    scanf("%s", novoVeiculo->proprietario);
    limparBuffer();
    // CHAMADA DA FUNCAO DE VERIFICACAO DO COMBUSTIVEL
    verificarCombustivel(novoVeiculo);
    limparBuffer();
    printf("-Digite o modelo do veiculo: ");
    fgets(novoVeiculo->modelo, sizeof(novoVeiculo->modelo), stdin);
    limparBuffer();
    printf("-Digite a cor do veiculo: ");
    fgets(novoVeiculo->cor, sizeof(novoVeiculo->cor), stdin);
    limparBuffer();
    printf("-Digite o numero do chassi: ");
    scanf("%d", &novoVeiculo->chassi);
    limparBuffer();
    // CHAMADA DA FUNCAO DE VERIFICACAO DA PLACA
    verificarPlaca(novoVeiculo);
    limparBuffer();
    printf("-Digite o ano do carro: ");
    scanf("%d", &novoVeiculo->ano);
    if (lista == NULL)
    {
        lista = novoVeiculo;
    }
    else
    {
        Veiculo *atual = lista;
        while (atual->prox != NULL)
        {
            atual = atual->prox;
        }
        atual->prox = novoVeiculo;
    }
    return lista;
}

// LISTAR
void listarVeiculo(Veiculo *lista)
{
    Veiculo *atual = lista;
    printf("=============================================\n");
    printf("|            LISTAGEM VEICULOs               |\n");
    printf("=============================================\n");
    if (atual == NULL)
    {
        printf("\nLista vazia\n");
        return;
    }
    else
    {
        while (atual != NULL)
        {
            printf("\n\nPROPRIETARIO: %s", atual->proprietario);
            printf("\nCOMBUSTIVEL: %s", atual->combustivel);
            printf("\nMODELO: %s", atual->modelo);
            printf("COR: %s", atual->cor);
            printf("CHASSI: %d", atual->chassi);
            printf("\nPLACA: %s", atual->placa);
            printf("\nANO: %d", atual->ano);
            printf("\n___________________________");
            atual = atual->prox;
        }
    }
}

// LISTAGEM PERSONALIZADA (ANO 2010 - DIESEL)
void listar2010_diesel(Veiculo *lista)
{
    Veiculo *atual = lista;
    printf("==============================================================================\n");
    printf("|            LISTAGEM DE VEICULOS 2010 OU MAIS MOVIDOS A DIESEL               |\n");
    printf("==============================================================================\n");
    int verificacao = 0;
    if (atual == NULL)
    {
        printf("\nLista vazia\n");
        return;
    }
    else
    {
        while (atual != NULL)
        {

            if (atual->ano >= 2010 && (strcmp(atual->combustivel, "Diesel") == 0))
            {
                 printf("\n ======================");
                printf("\n- Proprietario: %s", atual->proprietario);
                printf("- Modelo: %s", atual->modelo);
                printf("- Cor: %s", atual->cor);
                printf("- Combustivel: %s", atual->combustivel);
                printf("- Placa: %s", atual->placa);
                printf("- Ano: %d", atual->ano);
                printf("\n- Numero do Chassi: %d\n", atual->chassi);
                verificacao++;
            }
            atual = atual->prox;
        }
    }

    if (verificacao == 0)
    {
        printf("\nVeiculo não encontrado!");
    }
}

// LISTAGEM PERSONALIZADA (PLACA COMECA COM J - TERMINA COM 0, 2, 4 ou 7)
void listarPlacaJ(Veiculo *lista)
{
    Veiculo *atual = lista;
    int verificacao = 0;
    printf("=====================================================================================\n");
    printf("|    LISTAGEM DE PLACAS QUE COMECAM COM A LETRA J E TERMINAM COM 0, 2, 4 ou 7        |\n");
    printf("=====================================================================================\n");

    if (atual == NULL)
    {
        printf("\nLista vazia\n");
        return;
    }
    else
    {

        while (atual != NULL)
        {
            char primeiraLetra = tolower(atual->placa[0]);

            if (atual->placa[0] == 'J' && (atual->placa[6] == '0' || atual->placa[6] == '2' || atual->placa[6] == '4' || atual->placa[6] == '7'))
            {
                printf("\n ======================");
                printf("\n- Proprietario: %s", atual->proprietario);
                printf("- Modelo: %s", atual->modelo);
                printf("- Cor: %s", atual->cor);
                printf("- Combustivel: %s", atual->combustivel);
                printf("- Placa: %s", atual->placa);
                printf("- Ano: %d", atual->ano);
                printf("\n- Numero do Chassi: %d\n", atual->chassi);
                atual = atual->prox;
                verificacao++;
            }
            atual = atual->prox;
            return;
        }
    }

    if (verificacao == 0)
    {
        printf("\nVeiculo não encontrado!");
    }
}

// LISTAGEM PERSONALIZADA (SEGUNDA LETRA VOGAL - SOMA DOS NUMEROS PAR)
void listarVogal(Veiculo *lista)
{
    Veiculo *atual = lista;
    int verificacao = 0;
    printf("===============================================================================================\n");
    printf("|    LISTAGEM DE PLACAS QUE POSSUI COMO SEGUNDA LETRA UMA VOGAL E SOMA DOS NUMEROS PAR        |\n");
    printf("==============================================================================================\n");
 

    if (atual == NULL)
    {
        printf("\nLista vazia\n");
        return;
    }
    else
    {

        while (atual != NULL)
        {
            if ((atual->placa[1] == 'A' || atual->placa[1] == 'E' || atual->placa[1] == 'I' || atual->placa[1] == 'O' || atual->placa[1] == 'U') && (atual->placa[3] + atual->placa[4] + atual->placa[5] + atual->placa[6]) % 2 == 0)
            {
                printf("\n\nMODELO: %s", atual->modelo);
                printf("COR: %s", atual->cor);
                printf("\n___________________________");
                verificacao++;
            }
            atual = atual->prox;
        }
    }

    if (verificacao == 0)
    {
        printf("\nVeiculo não encontrado!");
    }
}

// ALTERACAO PERSONALIZADA (SOMENTE COM PLACAS QUE NAO POSSUAM ZERO)
Veiculo *alterarProprietario(Veiculo *lista)
{
    Veiculo *novoProprietario = lista;
    int chassi;
    printf("============================================================\n");
    printf("|                   ALTERAR DE PROPRIETARIO                |\n");
    printf("============================================================\n");

    printf("\nDigite o Chassi do veiculo: ");
    scanf("%d", &chassi);
    limparBuffer();
    while (novoProprietario != NULL)
    {
        if (novoProprietario->chassi == chassi && novoProprietario->placa[3] != 0 && novoProprietario->placa[4] != 0 && novoProprietario->placa[5] != 0 && novoProprietario->placa[6] != 0)
        {
            printf("\nDigite o novo proprietario: ");
            scanf("%s", novoProprietario->proprietario);
            limparBuffer();
            printf("\nProprietario alterado com sucesso!\n");
            return lista;
        }
        else
        {
            printf("\nNão é possivel trocar de proprietario!\n");
            return lista;
        }
    }
    printf("\nVeiculo não encontrado!");
    return lista;
}

main()
{
    Veiculo *lista = criarListaVazia();

    int opcao;
    do
    {
        
        printf("=======================================================================================\n");
        printf("|                                    Menu de Opcoes                                 |\n");
        printf("====================================================================================\n");
        printf("|1 - Cadastrar                                                                      |\n");
        printf("|2 - Listar                                                                         |\n");
        printf("|3 - Listar veiculos 2010 ou mais movidos a Diesel                                  |\n");
        printf("|4 - Listar placas que comeca com a letra J e terminam com 0, 2, 4 ou 7             |\n");
        printf("|5 - Listar placas que possui como segunda letra uma vogal e soma dos numeros par   |\n");
        printf("|6 - Alterar proprietario (PLACA NAO PODE POSSUIR DIGITO 0)                         |\n");
        printf("|0 - Sair                                                                           |\n");
        printf("\n ->");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            lista = cadastrarVeiculo(lista);
            break;
        case 2:
            listarVeiculo(lista);
            break;
        case 3:
            listar2010_diesel(lista);
            break;
        case 4:
            listarPlacaJ(lista);
            break;
        case 5:
            listarVogal(lista);
            break;
        case 6:
            alterarProprietario(lista);
            break;
        case 0:
            break;
        default:
            printf("\nOpcao não encontada\n");
        }
    } while (opcao != 0);
    printf("\nVoce saiu do programa!");
    free(lista);
}