#include <stdio.h>

int ehperfeito(int num);

int main(void) {
  int numero;
  
  printf("Digite um número para ver se ele é perfeito\n");
  scanf("%d", &numero);

  if(numero <= 0) {
    printf("Não existe número perfeito negativo e zero não é perfeito");
  } else {

      if(ehperfeito(numero)) {
        printf("O número %d é perfeito!\n", numero);
      } 
      else {
        printf("O número %d não é perfeito!\n", numero);
      }
    }

  return 0;
}

int ehperfeito(int num) {
  int i;
  int soma = 0;

  for(i = 1; i < num; i++) {
    if(num % i == 0) {
      soma += i;
    }   
  }
  if(soma == num){
    return 1;
  }
  else {
    return 0;
  }
}
