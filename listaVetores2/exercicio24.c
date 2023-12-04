#include <stdio.h>

main() {
    
    int numeroAluno;
    float altura;
    int alunoMaisBaixo, alunoMaisAlto;
    float alturaMaisBaixa = 3.0;
    float alturaMaisAlta = 0.0;
    for (int i = 0; i < 10; i++) {
        printf("Digite o numero do aluno %d: ", i + 1);
        scanf("%d", &numeroAluno);

        printf("Digite a altura do aluno %d (em metros): ", i + 1);
        scanf("%f", &altura);

        if (altura < alturaMaisBaixa) {
            alturaMaisBaixa = altura;
            alunoMaisBaixo = numeroAluno;
        }

        if (altura > alturaMaisAlta) {
            alturaMaisAlta = altura;
            alunoMaisAlto = numeroAluno;
        }
    }
    printf("\nAluno mais baixo:\n");
    printf("Numero do aluno: %d\n", alunoMaisBaixo);
    printf("Altura: %.2f metros\n", alturaMaisBaixa);

    printf("\nAluno mais alto:\n");
    printf("Numero do aluno: %d\n", alunoMaisAlto);
    printf("Altura: %.2f metros\n", alturaMaisAlta);
}