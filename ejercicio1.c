#include <stdio.h>

int main(){
  float velocidad = 0.0;
  float tiempo = 0.0;

  printf("Ingresa la velocidad constante en metros sobre segundos: ");
  scanf("%f", &velocidad);
  printf("Ingresa el tiempo que estuvo reccoriendo en segundos: ");
  scanf("%f", &tiempo);

  float distancia = velocidad * tiempo;

  printf("La distancia que recorrio el movil es de: %.2f metros\n", distancia);
  return 0;
}
