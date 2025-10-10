#include <stdio.h>
int main(void) {
	int aprovacoes = 0;
	int reprovacoes = 0;
	int contador = 1;
	int resultado;

	while (contador <= 10) {
		printf("Digite 1 = passou, 2 = reprovou\n");
		scanf("%d", &resultado);
		
		if (resultado == 1) {
			aprovacoes++;
		}
		else if (resultado == 2) {
			reprovacoes++;
		}
		else {
			printf("Resultado não compativel, tente por 1 ou 2\n");
		}
		contador++;
	}
	printf("Número total de aprovações: %d\n", aprovacoes);
	printf("Número total de reprovações: %d\n", reprovacoes);
	if (aprovacoes >= 8) {
		printf("Mérito ao proffessor\n");
	}
	return 0;
}
