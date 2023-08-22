#include <stdio.h>

main()
{
  /* 9. Escreva um algoritmo para ler o salário
  mensal atual de um funcionário e o percentual de reajuste.
  Calcular e escrever o valor do novo salário.
   */
  float salario, percentual,novoSalario;
  printf("Insira seu salário: ");
  scanf("%f", &salario);
  printf("Insira o percentual de aumento: ");
  scanf("%f", &percentual);

  novoSalario = salario + (salario*percentual)/100;

  printf("Seu novo salario eh: %.2f", novoSalario);
  return 0;
}