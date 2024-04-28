#include <stdio.h>

int main(){
  float numero1 = 0, numero2 = 0;

  printf("Ingrese un numero: ");
  scanf("%f", &numero1);
  printf("Ingrese un numero: ");
  scanf("%f", &numero2);

  float promedio = (numero1 + numero2) / 2;
  printf("El promedio de la suma de los dos numeros es de %.1f\n", promedio);
  
  return 0;
}
