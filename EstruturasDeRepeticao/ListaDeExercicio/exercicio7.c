#include <stdio.h>
#include <math.h>
main()
{
  /* 7. Uma pesquisa sobre algumas características físicas da
população de uma determinada região coletou os seguintes dados, referentes a cada habitante:

a) sexo (m e f);

b) cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos));

c) cor dos cabelos (l (loiros), c (castanhos), p (pretos), r (ruivos));

d) idade em anos.

e) valor do salário.

Para o cadastro, todos os campos deve ser validados,
ou seja, para sexo, serão aceitos somente as opções ‘m’ e ‘f’;
para cor de olhos, apenas as opções ‘a’, ‘v’, ‘c’ e ‘p’;
para cor dos cabelos, apenas as opções ‘l’, ‘c’, ‘p’ e ‘r’;
para idade, apenas valores entre 10 e 100 anos,
inclusive estes e para o salário, não aceitar valores negativos.

Para indicar fim dos habitantes pesquisados, o usuário fornecerá um habitante fictício com idade igual a –1.

Ao final, o algoritmo deve determinar a porcentagem de indivíduos do sexo feminino,
com idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos   */

  char sexo, corDosOlhos, corDosCabelos;
  float valorDoSalario;
  int idadeEmAnos;

  do
  {

    do
    {
      printf("\n Informe seu sexo: ");
      printf("\n (m=masculino e f=feminino) ");
      printf("\n-> ");
      scanf("%c", &sexo);
      fflush(stdin);
    } while (sexo != 'm' && sexo != 'f');
    do
    {
      printf("\n informe a cor dos seus olhos: ");
      printf("\n (a (azuis), v (verdes), c (castanhos), p (pretos)) ");
      printf("\n-> ");
      scanf("%c", &corDosOlhos);
      fflush(stdin);
    } while (corDosOlhos != 'a' && corDosOlhos != 'v' && corDosOlhos != 'c' && corDosOlhos != 'p');
    do
    {

      printf("\n informe a cor dos seu cabelo: ");
      printf("\n (a (azuis), v (verdes), c (castanhos), p (pretos)) ");
      printf("\n-> ");
      scanf("%c", &corDosCabelos);

      fflush(stdin);
    } while (corDosCabelos != 'a' && corDosCabelos != 'v' && corDosCabelos != 'c' && corDosCabelos != 'p');

    printf("\n informe o valor do seu salario: ");
    printf("\n O valor não pode conter virgulas ");
    printf("\n-> ");
    scanf("%f", &valorDoSalario);
    do
    {
      printf("\n informe sua idade em anos: ");
      printf("\n (18 e 35 anos) ");
      printf("\n-> ");
      scanf("%d", &idadeEmAnos);
    } while (idadeEmAnos != -1 && idadeEmAnos >= 18 && idadeEmAnos <= 35);
  } while (idadeEmAnos != -1);
  printf("Programa encerrado");
}