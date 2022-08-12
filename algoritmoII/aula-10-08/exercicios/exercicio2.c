#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14


int main(void){
  double raio, altura, volume = 0;

  printf("Digite o raio: ");
  scanf("%lf", &raio);

  printf("Digite a altura: ");
  scanf("%lf", &altura);

  volume = pi * (sqrt(raio)) * altura;

  printf("Volume: %.2f", volume);

  return(0);
}
