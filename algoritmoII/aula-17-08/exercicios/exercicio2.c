#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faça um programa estruturado com menu para o seguinte caso: Um capital (ValorCapital) aplicado a
juros (JUROS) simples durante 2 anos (Periodo), sob taxa de juros de 5% ao mês, gerou um montante
(Montante) de R$ 26.950,00. Determine o valor do capital aplicado. (Verifique na internet a fórmula do
juros simples, sugestão site Brasil Escola)
"J = C ∙ i ∙ t"
J = C . 0.5 . 24

"M = C + J"
26.950 = C + J

J →  juro

C →  capital

i →  taxa de juro

t →  tempo

*/

void menu();
void exibir(double capital);
double calc();

void exibir(double capital){
  printf("\nO Capital inicial: %.2f", capital);
}

double calc(){
  double result = 0;

  result = 26950 / (0.5 * 24);

  return result;
}

void menu(){
  int option = 0;
  double result = 0;

  while(option != 3){
    printf("\n=========================\nMenu\n1 - Calcular\n2 - Exibir\n3 - Sair\nEscolha: ");
    scanf("%d", &option);

    if (option == 1) {
      printf("Calculando...");
      result = calc();
    }
    else if(option == 2){
      printf("Exibir");
      exibir(result);
    }
    else if(option == 3){
      printf("Saindo...");
      system("exit");
    }
  }
}

int main(){
  menu();

  return(0);
}
