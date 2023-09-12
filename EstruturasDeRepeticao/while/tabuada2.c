#include <stdio.h>
 #include <math.h>
main()
{
    int n = 2; 
    int contador = 1; 
    int res = 0; 

    while(contador<=10){
        res = contador*n;
        printf("\n %d X %d = %d ",n, contador,res);
        contador++;
    }
 
}