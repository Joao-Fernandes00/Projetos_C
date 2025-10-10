#include <stdio.h>
int main(void) {
    float preco, lucro;

    printf("Qual o valor da compra?\n");
    scanf("%f", &preco);

    if (preco <= 0) {
        printf("Valor negativo");
    }
    else if (preco <= 20) {
        lucro = preco + (preco * 0.45);
            printf("A venda foi de: %.2f", lucro);
    }
    else {
        lucro = preco + (preco * 0.30);
            printf("A venda foi de: %.2f", lucro);
    }


return 0;
}