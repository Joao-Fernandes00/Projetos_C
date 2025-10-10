#include <stdio.h>
#include <string.h>

int main(void) {
  char nomes[3][30];
  int i;

  for(i = 0; i < 3; i++) {
    printf("Nome da pessoa %d:\n", i+1);
    fgets(nomes[i], 30, stdin);
  }

  printf("\n");

  for(i = 0; i < 3; i++) {
    printf("%dº %s\n",i+1, nomes[i]);
  }

  return 0;
}
