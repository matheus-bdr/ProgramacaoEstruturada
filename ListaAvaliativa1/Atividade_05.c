#include <stdio.h>
#include <math.h>
main()
{
   double x1, y1, x2, y2, distancia;
    
    printf("Digite as coordenadas de p1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Digite as coordenadas de p2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("A distancia entre os pontos p1 e p2 e: %.4lf\n", distancia);
    
    return 0;
}