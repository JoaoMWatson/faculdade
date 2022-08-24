/* Faça um programa estruturado para ler o comprimento, calcular o diâmetro, calcular o raio e finalmente
calcular a área de um círculo. Crie um menu de controle com as opções 1 ler, 2 calcular, 3 exibir e 4
 sair. Crie as sub-rotinas de leitura, cálculo e de exibição. */

// diamentro = comprimento / pi
// raio = diamentro / 2
// area = raio² * pi

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14

double lerComprimento();
double calcDiametro(double comprimento);
double calcRaio(double diametro);
double calcArea(double raio);
void exibir(double comprimento, double diamentro, double area, double raio);
void controle();
int calcFlag = 0;


int main(){
  controle();

  return(0);
}


double calcDiametro(double comprimento){
  double outDiametro = 0;

  outDiametro = comprimento / pi;

  return outDiametro;
}

double calcRaio(double diametro){
  double outRaio = 0;

  outRaio = diametro / 2;

  return outRaio;
}

double calcArea(double raio){
  double outArea = 0;

  outArea = sqrt(raio) * pi;

  return outArea;
}

double lerComprimento(){
  double in_comprimento = 0;

  printf("\nComprimento: ");
  scanf("%lf", &in_comprimento);

  return(in_comprimento);
}

void exibir(double comprimento, double diametro, double area, double raio){

  printf("\n\nComprimento: %.2f", comprimento);
  printf("\nDiametro: %.2f", diametro);
  printf("\nArea: %.2f", area);
  printf("\nRaio: %.2f\n\n", raio);

  calcFlag = 0;
}

void controle(){
  int opcao = 0;
  double comprimento, diametro, raio, area = 0;

  while(opcao != 4){

    printf("\n===================\n1: ler \n2: calcular \n3: exibir \n4: sair \nEscolha:");
    scanf("%i", &opcao);
    printf("\n===================");

    if(opcao == 1){
      comprimento = lerComprimento();
    }
    else if (opcao == 2) {
      diametro = calcDiametro(comprimento);
      raio = calcRaio(diametro);
      area = calcArea(raio);
      printf("\n\nCalculo Feito!\n");
      calcFlag = 1;
    }
    else if (opcao == 3) {
      exibir(comprimento, diametro, area, raio);
    }
    else if (opcao == 4) {
      system("exit");
    }
    else{
      printf("Opcao não encontrada");
    }
  }
}
