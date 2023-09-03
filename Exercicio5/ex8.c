#include <stdio.h>
main()
{
  /* Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se  aposentar. As condições para aposentadoria são: 
  • Ter pelo menos 65 anos; 
  • Ou ter trabalhado pelo menos 30 anos;,
  • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.  */

   int idade, tempo ;
    printf("insira aqui sua idade: ");
    scanf("%d",&idade);
    printf("Tempo de servico em anos: ");
    scanf("%d",&tempo);
    if(idade>=65 || tempo>=30){
        printf("pode se aposentar");
    }else if(idade>=60 && tempo>=25){
        printf("pode se aposentar! ");
    }else{printf("nao pode se aposentar ");}
}
