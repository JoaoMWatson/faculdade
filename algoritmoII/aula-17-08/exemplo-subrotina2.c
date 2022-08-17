#include <stdio.h>
#include <stdlib.h>

#define taxa 0.1

double novoSalario(double salarioAtual);

int main(){
  double salarioAtual, salario2;
  int item;
  char nome[30];

Menu:
  system("clear");
  printf("\n1 Executar \n2 Sair \nitem:");
  scanf("%i", &item);

  if (item == 1) {
    gets(); // Ignora enter anterior

    printf("Digite seu nome: ");
    gets(nome);

    printf("\nDigite salario atual: ");
    scanf("%lf", &salarioAtual);

    salario2 = novoSalario(salarioAtual);
    printf("\nSr. %s, seu novo salário é %.2f \n", nome, salario2);
    system("sleep 5");

    goto Menu;
  }
  else if(item == 2) {
    exit(0);
  }

  return(0);
}

double novoSalario(double salarioAtual){
  double aumento;

  aumento = (salarioAtual * taxa) + salarioAtual;

  return aumento;

}
