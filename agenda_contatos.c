#include <stdio.h>
#include <string.h>

struct Contato {
  char nome[30];
  char numero[15];
};

typedef struct Contato Contato;

int main(void) {
  Contato agenda[5];
  int total = 0;
  int i;
  int opcao;

  do {

    printf("\n --- Menu ---\n");
    printf("1 - Adicionar contatos\n");
    printf("2 - Listar contatos\n");
    printf("3 - Buscar contatos\n");
    printf("4 - Sair\n");
    printf("Escolha: ");
    scanf("%d", &opcao);
    getchar();

    if(opcao == 1) {
      if(total < 5) {
        printf("Nome: ");
        fgets(agenda[total].nome, 30, stdin);
        agenda[total].nome[strcspn(agenda[total].nome, "\n")] = '\0';

        printf("Contato: ");
        fgets(agenda[total].numero, 15, stdin);
        agenda[total].numero[strcspn(agenda[total].numero, "\n")] = '\0';

        total++;
        printf("Contato adicionado!\n");
      }
      else{
        printf("Agenda cheia\n");
      }
    }

    if(opcao == 2) {
      for(i = 0; i < total; i++) {
        printf("%d %s - %s\n", i+1, agenda[i].nome, agenda[i].numero);
      }
      if(total == 0) {
        printf("Agenda vazia!\n");
      }
    }

    if(opcao == 3) {
      char busca[30];
      printf("Digite um nome: ");
      fgets(busca, 30, stdin);
      busca[strcspn(busca, "\n")] = '\0';

      int achou = 0;
      for(int i = 0; i < total; i++) {
        if(strcspn(busca, agenda[i].nome) == 0) {
          printf("Encontrado: %s - %s\n", agenda[i].nome, agenda[i].numero);
          achou = 1;
          break;
        }
      }
      if(!achou) {
        printf("Contato não encontrado\n");
      }
    }

  } while(opcao != 4);



  if(opcao == 4) {
    printf("Saindo...\n");
  }
  return 0;
}