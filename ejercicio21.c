/* 
Escribir un algoritmo que calcule el producto escalar y vectorial de dos vectores de 3
elementos cuyos valores se introducen por pantalla.
*/

#include <stdio.h>

int main(){

  int V1[3];
  int V2[3];
  int sum = 0;
  int x, y, z, P = 0;  

  // ingresar valores a V1
  for(int i = 0; i < 3; i++){
    printf("ingresar valores para V1: \n");
    scanf("%d", &V1[i]);
  }

  // ingresar valores a V2
  for(int i = 0; i < 3; i++){
    printf("ingresar valores para V2: \n");
    scanf("%d", &V2[i]);
  }

  // calcular producto punto
  for(int i = 0; i < 3; i++){
    P = V1[i]*V2[i];
    sum +=P;
  }

  printf("El producto escalar es: %d\n", sum);

  x = V1[1] * V2[2] - V1[2] * V2[1];
  y = V1[2] * V2[0] - V1[0] * V2[2];
  z = V1[0] * V2[1] - V1[1] * V2[0];

  printf("el producto vectorial es: \n");
  printf("i: %d, j: %d, k: %d\n", x, y, z);

  return 0;
}
