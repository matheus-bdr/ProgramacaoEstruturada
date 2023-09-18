#include <stdio.h>
#include <math.h>
main()
{
   /*  6. Elabore um algoritmo que permita ao usuário
realizar a compra de frutas. Assim, apresente a lista
de frutas disponíveis, abaixo, com seus respectivos
valores. O algoritmo deve permitir ao usuário retomar
o menu frutas quantas vezes quiser, e solicitar a quantidade
de frutas. Ao final, apresente o valor total da compra.

1 => ABACAXI – 5,00 a unidade
2 => MAÇA – 1,00 a unidade
3 => PERA – 4,00 a unidade */
   int i = 0, resultado=0, sair, escolha, ABACAXI = 5, MACA = 1, PERA = 4;
   do
   {
      printf("\n \t--------------------");
      printf(" \n \t|ESCOLHA SUA FRUTA|");
      printf("\n \t--------------------");
      printf("\n\t 1 => ABACAXI = 5,00 a unidade");
      printf("\n\t 2 => MAÇA = 1,00 a unidade");
      printf("\n\t 3 => PERA = 4,00 a unidade");

      printf("\n-> ");
      scanf("%d", &escolha);
      switch (escolha)
      {
      case 1:
         resultado = resultado + ABACAXI;
         break;
      case 2:
         resultado = resultado + MACA;
         break;
      case 3:
         resultado = resultado + PERA;
         break;
      default:
         printf("valor invalido");
         break;
      }
      printf("\n=====DESEJA SAIR?======");
      printf("\n(caso a resposta for sim, digite 0)");
      printf("\n-> ");
      scanf("%d", &sair);
   } while (sair != 0);
   printf("O valor das suas compras foi: %d", resultado);
}