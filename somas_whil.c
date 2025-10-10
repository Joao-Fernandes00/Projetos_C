#include <stdio.h>
int main(void) {
    int numero;
    int soma = 0;

    printf("Digite o número: ");
    scanf("%d", &numero);

    while (numero != 0) {
        soma = soma + numero;
        scanf("%d", &numero);
        
    }
    printf("A soma foi: %d", soma);

return 0;
}