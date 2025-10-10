#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ehPar(int m) {
  if(m % 2 == 0) {
    return 1;
  }
  return 0;
}



int main(void) {
  int numeros[20];
  int i;
  int quantPares = 0;
  int quantImpares = 0;

  srand(time(NULL));

  for(i = 0; i < 20; i++) {
    numeros[i] = 1 + rand() % 100;
    printf("%4d\n", numeros[i]);

    if(ehPar(numeros[i])) {
      quantPares++;
    }
    else {
      quantImpares++;
    }
  }

  printf("A quantidades de pares é: %d\n", quantPares);
  printf("A quantidade de impares é: %d\n", quantImpares);

  return 0;
}
