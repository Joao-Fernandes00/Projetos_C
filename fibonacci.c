#include <stdio.h>

long int fibonacci(long int n1);

int main(void) {
  int num1;

  printf("Digite um número que deseja ver na sequência de fibonacci\n");
  scanf("%d", &num1);
  
  if(num1 <= 0) {
    printf("Não existe número negativo ou zero na sequência de fibonacci\n");
    return 1;
  }

  printf("O número %d na sequência de Fibonacci é: %ld\n",num1, fibonacci(num1));

  return 0;
}

long int fibonacci(long int n1) {
  
  if(n1 == 1) {
  
    return 0;

  } else if(n1 == 2) {

      return 1;
  } 
  else {
    return  fibonacci(n1 -1) + fibonacci(n1 - 2);
  }
}
