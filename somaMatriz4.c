#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int matriz[4][4];
  int i, j;
  int somaColunas[4] = {0};
  int somaLinhas[4] = {0};

  srand(time(NULL));

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 4; j++) {
      matriz [i][j] = 1 + rand() % 50;
      printf("%4d", matriz[i][j]);
      somaLinhas[i] += matriz[i][j];
      somaColunas[j] += matriz[i][j];
    }
    printf("\n");
  }
  for(i = 0; i < 4; i++) {
    printf("A soma dessa linha foi: %d\n", somaLinhas[i]);
  }

  for(j = 0; j < 4; j++) {
    printf("A soma dessa coluna foi: %d\n", somaColunas[j]);
  }

  return 0;
}
