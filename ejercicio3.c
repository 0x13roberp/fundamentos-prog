#include <stdio.h>

int main(){
  int RC = 0, RI = 0, RB = 0;

  printf("Ingrese cuantas respuestas correctas tienes: ");
  scanf("%i", &RC);
  printf("Ingrese cuantas respuestas incorrectas tienes: ");
  scanf("%i", &RI);
  printf("Ingrese cuantas respuestas en blanco tienes: ");
  scanf("%i", &RB);

  int PRC = RC*3, PRI = RI*-1, PRB = RB*0;
  int PF = PRC+PRI+PRB;

  printf("Tu puntaje final es de %i\n", PF);
  return 0;
}
