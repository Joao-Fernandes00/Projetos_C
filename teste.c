#include <stdio.h>
int main() {
/*variaveis para usar*/
int notas;
int media;
int contador = 1;
int total = 0;

/*solicite as notas*/
    while(contador <= 10) {
        printf("Digite sua nota\n");
        scanf("%d", &notas);
        total = total + notas;
        contador = contador + 1;
    } /*Fim do while*/

    media = total / 10;
    /*Imprima o resultado*/
    printf("O resultado é: %d", media);


return 0;
}