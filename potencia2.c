#include <stdio.h>

double potencia(double base, int expoente);

int main(void) {
  double x;
  int y;

  printf("Digite sua base\n");
  scanf("%lf", &x);

  printf("Digite seu expoente\n");
  scanf("%d", &y);

  double resultado = potencia(x, y);

  printf("O resultado foi: %lf", resultado);
  return 0;
}

  double potencia(double base, int expoente) {
  int i;
  double resultado = 1;

  if(expoente >=0) {
    for(i = 0; i < expoente; i++) {
      resultado *= base;
    }
  } else {
      for(i = 0; i < -expoente; i++) {
      resultado *= base;
    }
    resultado = 1.0 / resultado;
  }
  return resultado;
}
