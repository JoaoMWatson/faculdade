#include <stdio.h>
#include <stdlib.h>

// Globais
double const pi = 3.14; // Constante
double altura = 5.55;

void exibir( double raio, char fig[] );

int main(void){
  char figura[30];
  double raio = 10.5;
  puts("Nome da figura: ");
  gets(figura);

  exibir(raio, figura);
  exibir(13.4, "Circuferencia");

  system("sleep 5");

}

void exibir(double raio, char fig[]){
  double volume = raio * raio * pi * altura;

  printf("Figura: %s, Volume %.2f\n", fig, volume);

}
