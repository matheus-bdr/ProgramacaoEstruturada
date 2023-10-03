#include <stdio.h>
#include <math.h>
#include <string.h>
main()
{
    int n[5], i;
   
    printf("\n-----------Atribuindo valores com o for e printando--------- \n");
    for (i = 0; i < 5; i++)
    {
        printf("Insira o valor: ");
        scanf("%d", &n[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n o valor na posicao %d: %d", i, n[i]);
    }

    
    return 0;
}