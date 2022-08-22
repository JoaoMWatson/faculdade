#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Faça um programa estruturado para ler a base e altura de um triângulo e calcular o valor da área . Crie
funções de leitura, funções de cálculo é voids de saída. Coloque um menu.
*/

double readAltura();
double readBase();
double calcArea(double altura, double base);
void display(double altura, double base, double area);
int calcFlag = 0;


void display(double altura, double base, double area){
  system("clear");
  printf("Altura = %.2f", altura);
  printf("\nBase = %.2f", base);
  printf("\nArea = %.2f", area);
}

double calcArea(double altura, double base){
  double area = 0;

  area = base * altura;

  return area;
}

double readBase(){
  double base;

  printf("\nBase: ");
  scanf("%lf", &base);

  return base;
}

double readAltura(){
  double altura;

  system("clear");

  printf("\nAltura: ");
  scanf("%lf", &altura);

  return altura;
}

int main(){
  int option = 0;
  double altura, base, area = 0;

  while(option != 4){
    system("clear");

    printf("1 = Inserir\n2 = Calcular\n3 = Mostrar\n4 = Sair\nEscolha: ");
    scanf("%d", &option);

    if(option == 1){
      printf("Iniciando leitura...");
      system("sleep 2");

      altura = readAltura();
      base = readBase();
    }
    else if(option == 2){
      printf("\nCalculando");
      area = calcArea(altura, base);
    }
    else if(option == 3){
      display(altura, base, area);
    }
    else if(option == 4){
      printf("Encerrando");
    }
  }

  return(0);
}
