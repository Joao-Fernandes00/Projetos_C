#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ehprimo(int n){
  int i;
  if(n < 2){
    return 0;
  }
  for(i = 2; i < n/2; i++){
    if(n % i == 0){
      return 0;
    }
  }
  return 1;
}

float mediamult3(int v[], int tamanho){
  int soma = 0;
  int conta = 0;

  for(int i = 0; i < tamanho; i++){
    if(v[i] % 3 == 0){
      soma += v[i];
      conta++;
    }
  }
  if(conta == 0) return 0;
  return (float) soma / conta;
}

int segundomaior(int v[], int tamanho){
  int maior = v[0], segundo = -1;
  for(int i = 1; i < tamanho; i++){
    if(v[i] > maior){
      segundo = maior;
      maior = v[i];
    }
    else if(v[i] > segundo && v[i] < maior){
      segundo = v[i];
    }
  }
  return segundo;
}

int main(void) {
  int numeros[15];
  int quantprimos = 0;

  srand(time(NULL));

  for(int i = 0; i < 15; i++){
    numeros[i] = 1 + rand() % 50;
    printf("O número gerado foi: %d\n", numeros[i]);
    if(ehprimo(numeros[i])){
      quantprimos++;
    }

  }
  printf("A quantidade de números primos é de: %d\n", quantprimos);
  printf("A média de numeros multiplos de 3 é: %.2f\n", mediamult3(numeros, 15));
  printf("O segundo maior número gerado foi: %d\n", segundomaior(numeros, 15));
  return 0;
}