#include <stdio.h>
 #include <math.h>
 #include <string.h>
main()
{
    
    char Alunos[3][20] = {"Maria","jose", "pedro luis"};

    printf("nome: %s", Alunos[2]);

    char nomes[3][20];

    for(int i = 0;i<3;i++){
        printf("\n Digite um nome: ");
        fgets(nomes[i],20,stdin);
    }
    for(int i = 0;i<3;i++){
        printf("nome %d: %s",i,nomes[i]);
    }
}