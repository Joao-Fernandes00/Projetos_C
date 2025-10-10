#include <stdio.h>
#include <stdlib.h> /*responsavel por rand*/
#include <time.h> /*Responsavel por time*/

int  main(void) {
  int i;
  srand(time(NULL)); /*gerador de numeros aleatorios*/

  for(i = 1; i <= 20; i++) {
    printf("%10d", 1 + ( rand() % 6));

    if(i % 5 == 0) {
    printf("\n");
    }
  }

  return 0;
}