// Quarta questão do trabalho:

/*Leia duas matrizes 4 × 4, crie uma terceira matriz contendo os maiores valores
de cada posição das matrizes lidas, e imprima a matriz resultante.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int matriz1[4][4], matriz2[4][4], matriz3[4][4];
  int i, j;

  printf("Digite os valores da primeira matriz:\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      scanf("%d", &matriz1[i][j]);
    }
  }
  printf("Digite os valores da segunda matriz:\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      scanf("%d", &matriz2[i][j]);
    }
  }

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
    }
  }
  
  printf("A matriz resultante eh:\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("%d ", matriz3[i][j]);
    }
    printf("\n");
  }
  return 0;
}