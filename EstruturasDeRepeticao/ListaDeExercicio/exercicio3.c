#include <stdio.h>
#include <math.h>
main()
{
    /*  3. Faça um programa que leia um número inteiro N
    e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional). */
    int n = 0, i = 0;
    printf("Insira aqui um numero: ");
    scanf("%d", &n);
    for (i = 0; i < 5; i++)
    {
        while (n % 2 != 0)
        {
            printf("\n numero: %d", n);
            n++;
        }
        n++;
    }
}