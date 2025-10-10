#include <stdio.h>

int main() {
    char operador;
    double num1, num2;

    printf("Digite uma operação (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite dois números: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operador) {
        case '+':
            printf("Resultado: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Resultado: %.2lf\n", num1 / num2);
            else
                printf("Erro: divisão por zero!\n");
            break;
        default:
            printf("Operador inválido.\n");
    }

    return 0;
}

