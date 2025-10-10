#include <stdio.h>

long int fatorial(long int numero);

int main(void) {

    int base;

    printf("Digite um número:\n");
    scanf("%d", &base);

    if(base < 0) {
        printf("Não existe fatorial de número negativo\n");
    }   else {
            printf("O fatorial de %d = %ld\n", base, fatorial(base));
    }
    return 0;
}

long int fatorial(long int numero) {
    int i;

    if(numero <= 1) {
        return 1;
    }
    else {
        return numero * fatorial(numero - 1);
    }
}