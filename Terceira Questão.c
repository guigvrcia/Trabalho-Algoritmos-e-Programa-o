// Terceira questão do trabalho:

/*Faça um programa que calcule o desvio padrão σ de um array arr contendo
n = 100 números reais, onde µ é a média dos valores em arr.*/

  #include <stdlib.h>
  #include <math.h>

  int main()
  {
    int N = 100, i;
    float arr[N], soma = 0.0, media = 0.0, desvio = 0.0;

    for(i = 0; i < N; i++) {
      printf("Digite o valor:\n");
      scanf("%f", &arr[i]);
      soma += arr[i];
    }
    media = soma / N;

    for(i = 0; i < N; i++){
      desvio += pow((arr[i] - media), 2);
    }
    desvio = sqrt(desvio / N);

    printf("O resultado do desvio padrao eh: %.2f\n", desvio);

    return 0;
  }