#include <stdio.h>

/* 11. Uma revendedora de carros usados paga a seus funcionários
 vendedores um salário fixo por mês, mais uma comissão também fixa 
 para cada carro vendido e mais 5% do valor das vendas por ele efetuadas.
  Escrever um algoritmo que leia o número de carros por ele vendidos, 
  o valor total de suas vendas, o salário fixo e o valor que ele recebe por 
  carro vendido. Calcule e escreva o salário final do vendedor. */
main() {
   float salario, valorDasVendas,salarioFinal;
  printf("Insira o salario: ");
  scanf("%f", &salario);
  printf("Insira o valor vendido no mes: ");
  scanf("%f", &valorDasVendas);

  valorDasVendas = (valorDasVendas*0.05);
  salarioFinal = salario + valorDasVendas;
  printf("O seu saario com a comissao eh: %.2f", salarioFinal);
   return 0;
}