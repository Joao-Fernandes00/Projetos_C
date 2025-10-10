#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int palpite;
  int numero_secreto;
  int i;

  srand(time(NULL));
  numero_secreto = 1 + rand() % 100;

  for(i = 0; i < 5; i++) {
    printf("Digíte seu palpite:\n");
    scanf("%d", &palpite);

    if(palpite == numero_secreto) {
      printf("O número %d era o número secreto\n", numero_secreto);
      return 0;
    }
    else if(palpite < numero_secreto) {
      printf("O palpite foi menor que o número secreto\n");
    }
    else {
      printf("O palpite foi maior que o número secreto\n");
    }
  }

  printf("Suas tentativas acabaram, o número secreto era: %d\n", numero_secreto);

  return 0;
}
