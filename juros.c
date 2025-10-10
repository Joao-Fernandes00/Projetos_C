#include <stdio.h>
#include <math.h>

int main(void) {
    double valor;
    double principal = 1.000;
    double taxa = 0.5;
    int ano;

    // Correção: use %s para strings
    printf("%4s%21s\n", "Ano", "Valor da conta");

    for (ano = 1; ano <= 10; ano++) {
        valor = principal * pow(1.0 + taxa, ano);

        // Correção: adicionar \n ao final da linha
        printf("%4d%21.2f\n", ano, valor);
    }

    return 0;
}
