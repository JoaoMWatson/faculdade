#include <stdio.h>

int main(void) {
  char letra;
  int idade;
  double media;

  printf("Digite letra: ");
  scanf("%c", &letra);

  printf("Digite idade: ");
  scanf("%d", &idade);

  printf("Digite media: ");
  scanf("%lf", &media); // double -> lf  float -> f

  printf("idade: %d  media %5.2f   letra %c", idade, media, letra);

  return(0);

}
