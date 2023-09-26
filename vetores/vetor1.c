#include <stdio.h>
 #include <math.h>
main()
{
    //declaracao e atribuicao
   
    int n[3] = {1,2,3};

    printf("%d", n[0]);
    printf("\n%d", n[2]);
    printf("\n%d", n[1]);
    printf("\n-----------Alteracao no vetor elemento 0--------- \n");
    n[0] = 100;

    printf("%d", n[0]);
    printf("\n%d", n[2]);
    printf("\n%d", n[1]);
 

}