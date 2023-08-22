#include <stdio.h>

main()
{
  /* 10. O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
  porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
  Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%,
  escrever um algoritmo para ler o custo de fábrica de um carro,
  calcular e escrever o custo final ao consumidor
   */
  // custoCarro = custoFabrica+porcentagemDistibuidor+impostos
  float custoCarro, custofinal;
  printf("Insira o custo carro: ");
  scanf("%f", &custoCarro);
  custofinal = custoCarro + ((custoCarro*28)/100) + ((custoCarro*45)/100);
  printf("o custo final do consumidor: %.2f", custofinal);
  return 0;
}