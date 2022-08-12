#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
  double valor, taxa, tempo, prestacao = 0;

  printf("Digite valor: ");
  scanf("%lf", &valor);

  printf("Digite taxa: ");
  scanf("%lf", &taxa);


  printf("Digite tempo: ");
  scanf("%lf", &tempo);

  prestacao = valor + ((valor * taxa/100) * tempo);

  printf("Prestacao: %.2f", prestacao);

  return(0);
}
