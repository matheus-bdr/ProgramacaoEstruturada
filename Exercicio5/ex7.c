#include <stdio.h>
main()
{
  /*  Faça um algoritmo que calcule a media ponderada das notas de 3 provas. 
  A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, 
  mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado.
   A nota para aprovação deve ser igual ou  superior a 7.0 pontos. */

    int nota1, nota2, nota3, peso1 =1,peso2 = 2;
    float media;
    printf("insira aqui sua primeira nota: ");
    scanf("%d",&nota1);
    printf("insira aqui sua segunda nota: ");
    scanf("%d",&nota2);
    printf("insira aqui sua terceira nota: ");
    scanf("%d",&nota3);

    media = ((nota1*peso1) + (nota2*peso2) +(nota3*peso2))/(peso1+peso1+peso2);

    printf("media ponderada: %2.f", media);
}
