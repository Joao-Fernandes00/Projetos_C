#include <stdio.h>
#include <string.h>

struct endereco {
  char rua[40];
  int numero;
  char cidade[30];
};

struct aluno {
  char nome[30];
  int matricula;
  struct endereco endereco;
};

typedef struct aluno aluno;

int main(void) {
  aluno matriculado[5];
  int total = 0;
  int i;
  int opcao;

  do {

    printf(" --- Menu --- \n");
    printf("1) Adicionar aluno\n");
    printf("2) Listar alunos\n");
    printf("3) Buscar alunos por matrícula\n");
    printf("4) Sair\n");
    scanf("%d", &opcao);
    getchar();

    printf("\n");

    if(opcao == 1) {
      if(total < 5) {
        printf("Nome: ");
        fgets(matriculado[total].nome, 30, stdin);
        matriculado[total].nome[strcspn(matriculado[total].nome, "\n")] = '\0';

        printf("Matrícula: ");
        scanf("%d", &matriculado[total].matricula);
        getchar();

        total++;
        printf("Matricula adicionada!\n");
      }
      else {
        printf("Matricula cheia\n");
      }
    }

    if(opcao == 2) {
      for(i = 0; i < total; i++) {
        printf("%d %s - %d\n", i+1, matriculado[i].nome, matriculado[i].matricula);
      }
      if(total == 0) {
        printf("Agenda vazia\n");
      }
    }

    if(opcao == 3) {
      int buscar;
      printf("Digite a matrícula: ");
      scanf("%d", &buscar);
      for(i = 0; i < total; i++) {
        if(buscar == matriculado[i].matricula) {
          printf("Matricula encontrada:\n%s - %d\n", matriculado[i].nome, matriculado[i].matricula);
        }
        else {
          printf("Matrícula não encontrada\n");
        }
      }
    }
    printf("\n");
  } while(opcao != 4);


  if(opcao == 4) {
    printf("Saindo...\n");
  }

  return 0;
}
