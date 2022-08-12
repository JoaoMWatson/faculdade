#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main(void){
  double tempo, velocidade, distancia, totalLitros = 0;

  printf("Digite o tempo: ");
  scanf("%lf", &tempo);

  printf("Digite o velocidade: ");
  scanf("%lf", &velocidade);


  distancia = tempo * velocidade;
  totalLitros = distancia / 12;


  printf("\nVelocidade: %.2f", velocidade);
  printf("\nTempo: %.2f", tempo);
  printf("\nDistancia: %.2f", distancia);
  printf("\nLitros usados: %.2f", totalLitros);


  return(0);
}
