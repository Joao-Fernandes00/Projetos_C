#include <stdio.h>

int ehprimo(int n) {
  int i;

  if(n <= 1) {
    return 0;
  }
  for(i = 2; i < n; i++) {
    if(n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main(void) {
  int primo;

  printf("Digite um número inteiro e positivo para saber se é primo ou não\n");
  scanf("%d", &primo);

  if(ehprimo(primo)) {
    printf("%d é um número primo\n", primo);
  } 
  else {
    printf("%d não é um número primo\n", primo);
  }

  return 0;
}
