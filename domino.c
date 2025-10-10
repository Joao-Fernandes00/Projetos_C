#include <stdio.h>
int main() {
    int m, n;

    scanf("%d %d", &m, &n);

    int max_domino = (m * n) / 2;

    printf("%d", max_domino);


return 0;
}