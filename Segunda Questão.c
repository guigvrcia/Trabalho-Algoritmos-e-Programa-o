// Segunda questão do trabalho:

/*Elabore um programa que a faça leitura de vários números inteiros, até que se digite um número negativo.
O programa deve retornar o maior e o menor número lido.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, maior, menor;

  printf("Digite um numero inteiro positivo:\n");
  scanf("%d", &num);

  maior = num;
  menor = num;

  while (num >= 0) {
    if (num > maior) {
      maior = num;
    }
    if (num < menor) {
      menor = num;
    }
    printf("Digite outro numero positivo ou digite um numero negativo para encerrar o programa.\n");
    scanf("%d", &num);
  }
  printf("O maior numero digitado foi: %d\n", maior);
  printf("O menor numero digitado foi: %d\n", menor);

  return 0;
}