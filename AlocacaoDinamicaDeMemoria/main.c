#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
//alocacao dinamica - malloc
int *p;
char *letra;
p = (int*)malloc(sizeof(int));
if(p==NULL){
    printf("Memoria cheia");
    return;
}
letra = (char*)malloc(sizeof(char));
printf("\n o endereco de memoria: %d", p);
*p = 10;
(*p)++; 
printf("\n o valor do ponteiro: %d", *p);

printf("\n o endereco de memoria: %d", letra);
*letra = 'l'; 
printf("\n o valor do ponteiro: %c", *letra);
free(p);
free(letra);
}