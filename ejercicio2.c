#include <stdio.h>

int main(){
  float nota1 = 0, nota2 = 0, nota3 = 0;
  printf("Ingresa tu nota del primer parcial: ");
  scanf("%f", &nota1);
  printf("Ingresa tu nota del primer parcial: ");
  scanf("%f", &nota2);
  printf("Ingresa tu nota del primer parcial: ");
  scanf("%f", &nota3);

  float promedio = (nota1 + nota2 + nota3) / 3;
  printf("Tu promedio de notas es de %.1f\n", promedio);
  return 0;
}
