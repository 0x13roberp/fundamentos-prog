#include <stdio.h>

int main(){
  int PG = 0, PE = 0, PP = 0; // partidos ganados, partidos empatados, partidos perdidos.
  
  printf("Ingrese el numero de partidos ganados: ");
  scanf("%i", &PG);
  printf("Ingrese el numero de partidos empatados: ");
  scanf("%i", &PE);
  printf("Ingrese el numero de partidos perdidos: ");
  scanf("%i", &PP);

  int PF = (PG*3) + (PE*-1);
  printf("Puntos totales: %i\n", PF);

  return 0;
}
