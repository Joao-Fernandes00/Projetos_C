#include <stdio.h>
int main(void) {
    float media;
    int total = 0;
    int notas;
    int contador = 0;

    printf("Digite sua nota, e (-1) caso queira encerrar o sistema\n");
    scanf("%d", &notas);

    while(notas != -1) {
        total = total + notas;
        contador++;

        scanf("%d", &notas);

    }   if(contador != 0) {
            media = (float)total / contador;
            printf("A média é: %.2f", media);
    }   else {
            printf("Nenhum valor foi inserido\n");
    }
return 0;
}