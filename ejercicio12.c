/* 
Escriba un algoritmo tal que dado como datos X números enteros, obtenga el número de
ceros que hay entre estos números. Por ejemplo, si se ingresa 6 datos: 9 0 4 8 0 1 El
algoritmo arroja que hay 2 ceros
*/

#include <stdio.h>

int main(){
  int arr[10];
  int longitud = 0;

  for(int i = 0; i < 10; i++){
    int k = 0;
    printf("ingrese los valores para agregar a la lista ");
    scanf("%d", &k);
    arr[i] = k;
    longitud++;
  }

  int ceros = 0;
  for(int i = 0; i < 10; i++){
    if(arr[i] == 0) ceros++;
  }

  printf("cantidad de ceros en el array: %d\n", ceros);
  
  return 0;
}
