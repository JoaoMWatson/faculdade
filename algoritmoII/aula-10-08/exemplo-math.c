#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define pi 3.14 // Criar constante

int main(void) {
  system("clear");
  setlocale(LC_ALL, "Portuguese");

  double resultado;
  resultado = pi * 10;

  printf("Resultado: %.3f", resultado);
  printf("\n");

  system("sleep 3");

  return 0;

}
