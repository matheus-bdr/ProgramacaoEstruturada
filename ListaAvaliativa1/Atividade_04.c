#include <stdio.h>
#include <math.h>
main()
{
   float a, b, c;
    
    printf("Digite os valores dos lados do triangulo (A, B, C): ");
    scanf("%f %f %f", &a, &b, &c);
    
    if (a < b + c && b < a + c && c < a + b) {
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
            printf("Triangulo Retangulo\n");
        } else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b) {
            printf("Triangulo Obtusangulo\n");
        } else {
            printf("Triangulo Acutangulo\n");
        }
    } else {
        printf("Nao e um triangulo valido.\n");
    }
    
    return 0;
}