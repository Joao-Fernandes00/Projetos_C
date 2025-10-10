#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contarpares(int v[5][5]) {
  int contador = 0;
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      if(v[i][j] % 2 == 0) {
        contador++;
      }
    }
  }
  return contador;
}

int maiorDiagonal(int m[5][5]) {
  int maior = m[0][0];
  for(int i = 1; i < 5; i++) {
    if(m[i][i] > maior) {
      maior = m[i][i];
    }
  }
  return maior;
}

int main(void) {
  int matriz[5][5];
  int i,j;

  srand(time(NULL));

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      matriz[i][j] = 1 + rand() % 99;
    }
  }

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      printf("%4d", matriz[i][j]);
    }
    printf("\n");
  }
  printf("O maior número da diagonal principal é: %d\n", maiorDiagonal(matriz));
  printf("A quantidade de pares foi: %d\n", contarpares(matriz));
  return 0;
}
