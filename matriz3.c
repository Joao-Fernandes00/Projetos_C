#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int matriz[3][3];
  int somas[3] = {0};
  int i, j;

  srand(time(NULL));

  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      matriz[i][j] = 1 + rand() % 50;
      printf("%4d", matriz[i][j]);
      somas[i] += matriz[i][j];
    }
    printf("  A soma dessa linha foi: %d", somas[i]);
    printf("\n");
  }

  printf("\n");

  int maior = 0;
  int linhaMaior = 0;

  for(i = 0; i < 3; i++) {
    if(maior < somas[i]) {
      maior = somas[i];
      linhaMaior = i + 1;
    }
  }

  printf("  A linha %d teve a maior soma, foi: %d\n", linhaMaior, maior);

  return 0;
}
