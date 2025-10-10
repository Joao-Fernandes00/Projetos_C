#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contarpares(int par[10]) {       /*Essa função conta os pares*/
  int contador = 0;
  for(int i = 0; i < 10; i++) {
    if(par[i] % 2 == 0) {
      contador++;
    }
  }
  return contador;
}

int somarimpares(int impar[10]) {     /*Essa função soma os impares*/
  int soma = 0;
  for(int i = 0; i < 10; i++) {
    if(impar[i] % 2 != 0) {
      soma += impar[i];
    }
  }
  return soma;
}

int maior(int big[10]) {              /*verifica o maior*/
  int i;
  int x = 0;
  for(i = 0; i < 10; i++) {
    if(x < big[i]) {
      x = big[i];
    }
  }
  return x;
}

int menor(int small[10]) {            /*verifica menor*/
  int i;
  int nano = 100;
  for(i = 0; i < 10; i++) {
    if(nano > small[i]) {
      nano = small[i];
    }
  }
  return nano;
}

int main(void) {
  int numeros[10];
  int i;

  srand(time(NULL));

  for(i = 0; i < 10; i++) {
    numeros[i] = 1 + rand() % 100;
    printf("O número gerado foi: %d\n", numeros[i]);
  }

  printf("\n");

  printf("O total de números pares foram de: %d\n", contarpares(numeros));

  printf("A soma dos impares foi de: %d\n", somarimpares(numeros));

  printf("O maior número foi: %d\n", maior(numeros));

  printf("O menor número foi: %d\n", menor(numeros));

  return 0;
}