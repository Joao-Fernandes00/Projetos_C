#include <stdio.h>
int main() {
	int a, b, resultado;

	printf("Digite dois números: \n");
	scanf("%d%d", &a, &b);

	if (a == b) {
	resultado = a + b;

	printf("Números iguais, a soma é: %d", resultado);
	}	else {
			resultado = a * b;
			printf("Números diferentes, o produto é: %d", resultado);
	}

	return 0;
}
