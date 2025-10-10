#include <stdio.h>

int main(void) {
  long long fatorial = 1;
  int n, i;

  printf("Digite um número:\n");
  scanf("%d", &n);

  if(n < 0){
    printf("Não existe fatorial de número negativo\n");
  }
  else {
  i = 1;
  while(i <= n) {
    fatorial *= i;
    i++;
  }
}
  printf("%d! = %lld\n", n, fatorial);
  
  return 0;
}