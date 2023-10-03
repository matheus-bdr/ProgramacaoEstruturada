#include <stdio.h>
#include <math.h>
main()
{
   int numAlunos = 30;
    double notas[numAlunos];
    double mediaGeral = 0.0;
    
    for (int i = 0; i < numAlunos; i++) {
        double n1, n2, n3, media;
        printf("Digite as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%lf %lf %lf", &n1, &n2, &n3);
        
        media = (n1 * 2 + n2 * 4 + n3 * 3) / 10;
        notas[i] = media;
        
        printf("Media do aluno %d: %.2lf\n", i + 1, media);
        
        if (media >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
        
        mediaGeral += media;
    }
    
    mediaGeral /= numAlunos;
    
    printf("Media geral da turma: %.2lf\n", mediaGeral);
    
    return 0;
}