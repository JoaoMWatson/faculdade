#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");

  double nota1 = 0, nota2 = 0, media = 0;

  printf("Digite nota 1: ");
  scanf("%lf", &nota1);

  printf("Digite nota 2: ");
  scanf("%lf", &nota2);

  media = (nota1 + nota2) / 2;

  printf("Média é: %.2f \n", media);
  system("sleep 5");

  return 0;

}
