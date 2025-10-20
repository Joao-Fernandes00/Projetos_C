#include <stdio.h>
#include <time.h>
#include <stdlib.h>

enum Status {CONTINUA, GANHOU, PERDEU};

int lancarDados(void) {
  int dado1 = 1 + rand() % 6;
  int dado2 = 1 + rand() % 6;
  int soma = dado1 + dado2;

  printf("O jogador lançou os dados %d + %d = %d\n", dado1, dado2, soma);

  return soma;
}

int main(void) {
  int minhaPontuacao;
  enum Status estadoDoJogo;

  srand(time(NULL));

  int somaDosDados = lancarDados();

  switch (somaDosDados) {
    case 7:
    case 11:
      estadoDoJogo = GANHOU;
      break;

    case 2:
    case 3:
    case 12:
      estadoDoJogo = PERDEU;
      break;

    default:
      estadoDoJogo = CONTINUA;
      minhaPontuacao = somaDosDados;
      printf("Sua pontuação é %d. Role os dados novamente\n", minhaPontuacao);
      break;
  }

  while (estadoDoJogo == CONTINUA) {
    somaDosDados = lancarDados();

    switch (somaDosDados) {
      case 7:
        estadoDoJogo = PERDEU;
        break;
      default:
        if (somaDosDados == minhaPontuacao) {
          estadoDoJogo = GANHOU;
        }
        break;
    }
  }

  printf("\n");

  switch (estadoDoJogo) {
    case GANHOU:
      printf("Parabéns, você ganhou!!\n");
      break;

    case PERDEU:
      printf("Que pena, voçê perdeu\n");
      break;

    default:
      printf("Erro inusitado\n");
      break;
  }

  return 0;
}
