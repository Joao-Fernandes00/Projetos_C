#include <stdio.h> 
int main(void) {
    int i, y;

    printf("Escolha seu número que será multiplicado de (1 à 10)\n");
    scanf("%d", &y);

    for(i = 1; i <= 100; i++) {
        printf("%d * %d é igual: %d\n", y, i, y * i);
    }
    return 0;
}