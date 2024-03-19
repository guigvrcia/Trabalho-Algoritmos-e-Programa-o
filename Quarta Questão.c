// Quarta questão do trabalho:

/*Faça um programa que receba 10 números inteiros e mostre:
• os números pares digitados;
• a soma dos números pares digitados;
• os números ímpares digitados; e
• a quantidade de números ímpares digitados.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, i;
  int somapares = 0, quantimpares = 0, mostrapar = 0, mostraimpar = 0, pares[10], impares[10];

  printf("Digite 10 numeros inteiros:\n");
  for (i = 0; i < 10; i++) {
    printf("Digite o %d numero:\n", i + 1);
    scanf("%d", &num);

    if (num % 2 == 0) {
      pares[mostrapar++] = num;
      somapares += num;
    } else {
      impares[mostraimpar++] = num;
      quantimpares++;
    }
  }
  printf("Os numeros pares digitados foram:\n");
  for (i = 0; i < mostrapar; i++) {
    printf("%d ", pares[i]);
  }
  printf("\n A soma dos numeros pares eh: %d\n", somapares);

  printf("Os numeros impares digitados foram:\n");
  for (i = 0; i < mostraimpar; i++) {
    printf("%d ", impares[i]);
  }
  printf("\n A quantidade de numeros impares digitados foi: %d\n", quantimpares);

  return 0;
}