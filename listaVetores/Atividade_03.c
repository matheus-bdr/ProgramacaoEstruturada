#include <stdio.h>
#include <math.h>
main()
{
    int conj1[10],conj2[10], i;
   
    printf("\n-----------Atribuindo valores com o for e printando--------- \n");
    for (i = 0; i < 10; i++)
    {
        printf("Insira o valor: ");
        scanf("%d", &conj1[i]);
    }
    for (i = 0; i < 10; i++)
    {
        conj2[i] = conj1[i]*conj1[i];
    }
    for (i = 0; i < 10; i++)
    {
        printf("\n o valor, que era no primeiro conjunto:\n %dagora no segundo conjunto eh: %d: \n %d", i,conj1[i], conj2[i]);
    }
}