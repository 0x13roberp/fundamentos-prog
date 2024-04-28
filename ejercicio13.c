/*
Para una empresa con N empleados, se desarrolla un algoritmo donde se ingresa como
datos el número de orden y sueldo de cada empleado, debe imprimirse el número de orden
del empleado con el mayor sueldo así como su sueldo. Haga el algoritmo correspondiente
*/

#include <stdio.h>

int main(){

  int n = 0, orden = 0, orden_maxsueldo = 0;
  float sueldo = 0.0, maxsueldo = 0.0;

  printf("escriba el numero de empleados: ");
  scanf("%d", &n);

  for(int i = 1; i < n+1; i++){
  printf("escriba el numero de orden del empleado %d: ", i);
  scanf("%d", &orden);

  printf("escriba el sueldo del empleado %d: ", i);
  scanf("%f", &sueldo);

  if(sueldo > maxsueldo){
      maxsueldo = sueldo;
      orden_maxsueldo = orden;
    }
  }

  printf("el empleado con el sueldo mas alto es el de orden %d y su sueldo es de %.2f\n", orden_maxsueldo, maxsueldo);

  return 0;
}
