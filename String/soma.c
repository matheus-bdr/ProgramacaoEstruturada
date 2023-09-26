#include <stdio.h>
#include <math.h>
#include <string.h>

main()
{
    // declaracao e atribuicao
    int n[5],soma=0, i;
    printf("\n-----------valores sem atribuicao--------- \n");
    printf("%d", n[0]);
    printf("\n%d", n[1]);
    printf("\n%d", n[2]);
    printf("\n%d", n[3]);
    printf("\n%d", n[4]);
    printf("\n%d", n[5]);
    printf("\n-----------Atribuindo valores com o for e printando--------- \n");
    for (i = 0; i < 5; i++)
    {
        printf("Insira o valor: ");
        scanf("%d", &n[i]);
    }
    for (i = 0; i < 5; i++)
    {
        soma =+n[i];
        printf("\n o valor na posicao %d: %d", i, n[i]);
    }

    
    return 0;
}