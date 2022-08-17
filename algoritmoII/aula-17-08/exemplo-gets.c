#include <stdio.h>

int main(){
  char nome[30];
  char nome_gets[30];

  printf("digite o nome: ");
  scanf("%s", nome);

  gets();

  printf("\nDigite seu nome completo: ");
  gets(nome_gets);

  printf("\nO nome digitado pelo scan foi: %s", nome);
  printf("\nO nome digitado pelo gets foi: %s", nome_gets);

  return(0);
}
