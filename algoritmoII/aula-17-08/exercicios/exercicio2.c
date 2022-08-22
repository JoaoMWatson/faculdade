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
double calc();

double calc(){
  double result = 0;

  result =

  return result;
}

void menu(){
  int option = 0;
  while(option != 2){
    printf("Menu\n 1 - Calcular\n 2 - Sair\n");
    scanf("%d", &option);

    if (option == 1) {
      system("clear");
      printf("Calculando...");

    }
    else if(option == 2){
      printf("Saindo...");
    }
  }

}


int main(){
  menu();

  return(0);
}
