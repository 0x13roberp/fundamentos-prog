#include <stdio.h>

int main(){
  int CONSU = 0;
  float LITXG = 3.7854;
  float PRECIOXL = 2.5;

  printf("Cuantos galones quiere cargar? ");
  scanf("%i", &CONSU);

  float TOTAL = CONSU*LITXG*PRECIOXL;

  printf("Su precio a pagar es de %.1f $\n", TOTAL);

  return 0;
}
