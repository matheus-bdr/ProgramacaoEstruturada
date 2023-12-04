/*

2. Com a proposta para ampliação da terceirização da mão de obra, o Ministério da Fazenda está empenhado em elaborar uma análise sobre o recebimento de salário regular através do registro em carteira profissional dos funcionários no país. Assim, elabore um algoritmo que obtenha, para cada assalariado, com carteira profissional assinada, o seu sexo M(masculino) e F(feminino) e o valor de seu salário, devendo este salário ser maior que um real (R$1,00). Seu algoritmo deverá analisar e classificar este assalariado em Acima, Igual ou Abaixo do salário mínimo. Sabe-se que o salário mínimo nacional é de R$ 1400,00. Após a leitura dos dados de cada assalariado cadastrado pelo ministério deverá ser apresentado o seu salário em reais, a classificação por extenso em relação ao salário mínimo e o sexo por extenso (Masculino ou Feminino).
A classificação em relação ao salário mínimo nacional deverá ser feita pelo sub-algoritmo classificaSalario e os resultados solicitados para cada assalariado deverão ser apresentados pelo sub-algoritmo denominado mostraClassifica. 
Você deverá fazer a entrada de dados para todos os assalariados que foram pesquisados pelo ministério, lembrando de fazer sempre a validação de todos os dados informados em sub-algoritmos específicos.   
Na solução deste problema os resultados finais de cada assalariado que participou desta pesquisa deverão ser apresentados.
Após a leitura dos dados de todos os assalariados pesquisados o seu algoritmo deverá apresentar a quantidade de assalariados com salário abaixo do salário mínimo e a quantidade assalariados com salário acima do salário mínimo.

*/
#include <stdio.h>

char obterSexo() {
    char sexo;
    printf("Digite o sexo do assalariado (M/F): ");
    fflush(stdin);
    scanf(" %c", &sexo);
    fflush(stdin);

    // Validação do sexo
    while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
        printf("Sexo inválido. Digite novamente (M/F): ");
        scanf(" %c", &sexo);
    }
    return sexo;
}

float obterSalario() {
    float salario;
    printf("Digite o salário do assalariado em reais: R$ ");
    scanf("%f", &salario);
    return salario;
}

int validaSalario(float salario) {
    return salario > 1.0;
}

void classificaSalario(float salario) {
    
    if (salario < 1400.0) {
        printf("--> Classificação do salário: Abaixo do salário mínimo\n");
    } else if (salario == 1400.0) {
        printf("--> Classificação do salário: Igual ao salário mínimo\n");
    } else {
        printf("--> Classificação do salário: Acima do salário mínimo\n");
    }
}

void mostraClassificacao(float salario, char sexo) {
    printf("--> Salário: R$ %.2f\n", salario);
    printf("--> Sexo: %s\n", (sexo == 'M' || sexo == 'm') ? "Masculino" : "Feminino");
    printf("______________________________________________\n");
}

void mostraResultado(int abaixoSalarioMinimo, int acimaSalarioMinimo) {
    printf("\n-------------- RESULTADO FINAL --------------\n");
    printf("Assalariados abaixo do salário mínimo: %d\n", abaixoSalarioMinimo);
    printf("Assalariados acima do salário mínimo: %d\n", acimaSalarioMinimo);
    printf("\n=============================================\n");
}

main() {
    int abaixoSalarioMinimo = 0;
    int acimaSalarioMinimo = 0;
    char resp;

    printf("\n============ PESQUISA SALARIAL ==============\n");

    do {
        printf("Possui carteira profissional assinada? (s/n): ");
        scanf(" %c", &resp);

        if (resp == 's') {
            char sexo = obterSexo();
            float salario = obterSalario();

            // Validação do salário
            while (!validaSalario(salario)) {
                printf("Salário inválido. Digite um valor maior que R$1,00: ");
                salario = obterSalario();
            }

            // Classificação do salário
            classificaSalario(salario);

            // Mostra resultados
            mostraClassificacao(salario, sexo);

            // Contagem de assalariados abaixo e acima do salário mínimo
            if (salario < 1400.00) {
                abaixoSalarioMinimo++;
            } else if (salario > 1400.0) {
                acimaSalarioMinimo++;
            }

            printf("\nDeseja cadastrar outro assalariado? (s/n): ");
            scanf(" %c", &resp);

            while (resp != 's' && resp != 'n') {
                printf("Entrada inválida! Digite novamente (s/n): ");
                scanf(" %c", &resp);
            }
        } else if (resp == 'n') {
            printf("Este programa é válido apenas para os assalariados que possuem carteira profissional assinada!\n");
        } else {
            printf("Opção inválida.\n");
        }
    } while (resp == 's');

    if (abaixoSalarioMinimo + acimaSalarioMinimo > 0) {
        mostraResultado(abaixoSalarioMinimo, acimaSalarioMinimo);
    } else {
        printf("Nenhum assalariado cadastrado.\n");
    }
}