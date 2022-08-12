#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  double comprimento, altura, largura = 0;

  printf("Digite comprimeto: ");
  scanf("%lf", &comprimento);

  printf("Digite altura: ");
  scanf("%lf", &altura);

  printf("Digite largura: ");
  scanf("%lf", &largura);


  printf("Volume = %.2f", comprimento * altura * largura);
  return 0;
}
