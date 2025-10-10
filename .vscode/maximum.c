#include <stdio.h>

    int maximum(int a, int b, int c);

    int main(void) {

    int x, y, z;
    printf("Escreva três números:\n");
    scanf("%d%d%d", &x, &y, &z);

    printf("O máximo é: %d", maximum(x, y, z));
    
    return 0;
    }

    int maximum(int a, int b, int c) {
        int max = a;
        if(b > max) {
            max = b;
        }   if(c > max) {
                max = c;
        }
        return max;
    }