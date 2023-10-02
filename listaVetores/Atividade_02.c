#include <stdio.h>
#include <math.h>
#include <string.h>
main()
{
    int n[5],soma=0, i;
   
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