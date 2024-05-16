/* 
Escribir un algoritmo que pida un vector de caracteres por pantalla e invierta el orden de los
caracteres mostrándolo por pantalla. La inversión se hará sin utilizar otro vector auxiliar.
*/

#include <stdio.h>

int main(){
  int i, d, n = 0;
  char z = ' ';

  printf("ingresa valor de n: ");
  scanf("%d", &n);

  char v[n];

  printf("ingresa los caracteres: \n");
  for(int i = 0; i < n; i++){
    scanf(" %c", &v[i]);
  }
  

  d = n-1;
  for(int i = 0; i < n/2; i++){
    z = v[i];
    v[i] = v[d];
    v[d] = z;
    d--;
  }

  printf("orden invertido: ");
  for(int i = 0; i < n; i++){
    printf("%c", v[i]);
  }
  printf("\n");

  return 0;
}
