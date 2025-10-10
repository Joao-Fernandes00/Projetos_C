#include <stdio.h>
#include <string.h>

#define MAX_PALAVRAS 5
#define TAM_MAX 20

int main(void) {
  char palavras[MAX_PALAVRAS][TAM_MAX];
  int quant = 0;
  int opcao;

  do {
    printf("\n====MENU====\n");
    printf("1 - Cadastrar palavra\n");
    printf("2 - Listar palavras\n");
    printf("3 - Mostar maior e menor palavras\n");
    printf("4 - Mostrar se é palindroma\n");
    printf("0 - Sair\n");
    printf("Escolha: ");
    scanf("%d", &opcao);
    getchar();

    switch (opcao) {
      case 1:
        if(quant < MAX_PALAVRAS) {
          printf("DIgite sua palavra:\n");
          fgets(palavras[quant], TAM_MAX, stdin);

          palavras[quant][strcspn(palavras[quant], "\n")] = '\0';

          quant++;
        }
      else {
          printf("Limite de palavras atingidos\n");
        }
      break;

      case 2:
        for(int i = 0; i < quant; i++) {
          printf("%s\n", palavras[i]);
        }
      break;

      case 3:
        
      break;

      case 4:
        
      break;

      case 0:
        printf("Saindo...\n");
    }

  } while(opcao != 0);

  return 0;
}
