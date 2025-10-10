#include <stdio.h>

float media(int num[5]) {
  float med;
  int soma = 0;

  for(int i = 0; i < 5; i++) {
    soma += num[i];
  }

  med = (float)soma / 5;
  return med;
}

int maiores(int vetor[5], float med) {
  int cont = 0;

  for(int i = 0; i < 5; i++) {
    if(vetor[i] > med) {
      cont++;
    }
  }
  return cont;
}

int main(void) {
  int numeros[5];
  float med;
  int i;

  for(i = 0; i < 5; i++) {
    printf("Digíte um número:\n");
    scanf("%d", &numeros[i]);
  }

  med = media(numeros);
  
  printf("A média dos numeros foi: %.2f\n", med);
  printf("O total de números maior que a média é de: %d\n", maiores(numeros, med));
  
  return 0;
}
