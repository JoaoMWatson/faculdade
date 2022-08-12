#include <stdio.h>
#include <stdlib.h>


int main(void){

  double celsius, fahrenheit = 0;

  printf("Graus celsius: ");
  scanf("%lf", &celsius);

  fahrenheit =  (9 * celsius + 160) / 5;

  printf("Graus em fahrenheit: %.2f", fahrenheit);

  return(0);

}
