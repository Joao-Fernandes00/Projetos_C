#include <stdio.h>
int main(void) {
int x, y, i, potencia;

    i = 1;

    potencia = 1;

    printf("Números: ");
    scanf("%d%d", &x, &y);

    while (i <= y) {
        potencia *= x;
        i++;
    }

    printf("%d", potencia);


return 0;
}