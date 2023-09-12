#include <stdio.h>
 #include <math.h>
main()
{
    int n1= 0 ,n2= 0,resultado= 0,sair= 0; 

    do
    {
        printf("\n Insira aqui um valor: ");
        scanf("%d",&n1);
        printf("\n Insira aqui um valor: ");
        scanf("%d",&n2);

        resultado= n1+n2;
        
        printf("resultado: %d",resultado);
        
        printf("\n Deseja fazer uma nova soma? \n 1 = nao   ");
        scanf("%d",&sair);
    }while(sair!=1);
 
}