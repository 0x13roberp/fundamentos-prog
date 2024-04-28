#include <stdio.h>

int main(){
  float base = 0, altura = 0;

  printf("Ingrese la base del rectangulo: ");
  scanf("%f", &base);
  printf("Ingrese la altura del rectangulo: ");
  scanf("%f", &altura);

  float perimetro = (2*base) + (2*altura);
  float area = base*altura;

  printf("El perimetro del rectangulo es de %.1f\n", perimetro);
  printf("El area o superficie del rectangulo es de %.1f\n", area);

  return 0;
}
