#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  enum status {CONTINUE, GANHOU, PERDEU};
  int roleDados(void);

int main(void) {
  int soma, meuPonto;

  enum status statusJogo;

  srand(time(NULL));

  soma = roleDados();

  switch(soma) {
    case 7:
    case 11:
      statusJogo = GANHOU;
      break;

    case 2:
    case 3:
    case 12:
      statusJogo = PERDEU;
      break;

    default:
      statusJogo = CONTINUE;
      meuPonto = soma;
      printf("Seu ponto é: %d\n", meuPonto);
      break;
  }

while(statusJogo == CONTINUE) {
    soma = roleDados();

    if(soma == meuPonto) {
      statusJogo = GANHOU;
    }
    else{
      if(soma == 7) {
        statusJogo = PERDEU;
      }
    }
  }

if (statusJogo == GANHOU) {
    printf("Jogador venceu\n");
  }
else{
    printf("Jogador perdeu\n");
  }

  return 0;
}

int roleDados(void) {
  int morte1, morte2, adicao;
  
  morte1 = 1 + (rand() % 6);
  morte2 = 1 + (rand() % 6);
  adicao = morte1 + morte2;

  printf("O jogador lançou %d + %d = %d\n", morte1, morte2, adicao);
  return adicao;
}
