// Primeira questão do trabalho:

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, i;
  double soma = 0;

  printf("Digite um numero inteiro para calcular o valor de H(n):\n");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    soma += 1.0 / i;
  }
  printf("O valor de H(n) eh:%.2f\n", soma);

  return 0;
}