#include <stdio.h>

int main(void){
  char letra = 'S';
  int idade = 40;
  char nome[] = "Sara Silva";
  double media = 5.44;

  printf("Meu nome é %s, \ntenho %d anos de idade, \nminha média final é %.2f \ne minha inicial é %c", nome, idade, media, letra);

  printf("\n\nMedia: %5.2f \n", media);

  printf("\n\nMédia: %-5.2f \n", media);

  return 0;
}
