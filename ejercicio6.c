#include <math.h>
#include <stdio.h>

int main(){
  float Ax = 0, Ay = 0;
  float Bx = 0, By = 0;

  printf("Ingrese el valor en x del punto A: ");
  scanf("%f", &Ax);
  printf("Ingrese el valor en y del punto A: ");
  scanf("%f", &Ay);
  printf("Ingrese el valor en x del punto B: ");
  scanf("%f", &Bx);
  printf("Ingrese el valor en y del punto B: ");
  scanf("%f", &By);

  float distancia = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));

  printf("La distancia entre los dos puntos es de %.2f\n", distancia);
  return 0;
}
