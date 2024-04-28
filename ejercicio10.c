#include <stdio.h>
#include <math.h>

int main(){
  float radio = 0, altura = 0;

  printf("Ingrese el radio: ");
  scanf("%f", &radio);
  printf("Ingrese la altura del cilindro: ");
  scanf("%f", &altura);

  float area = 2*M_PI*radio*(radio+altura);
  float volumen = M_PI*(pow(radio, 2))*altura;

  printf("El area de la superficie del cilindro es de %.2f\n", area);
  printf("El volumen del cilindro es de %.2f\n", volumen);

  return 0;
}
