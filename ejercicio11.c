/* 
Ejercicio 11. Realizar el código en c o python
Escribir un algoritmo que imprima los 10 primeros números pares comenzando en 2 e
imprima también sus respectivos cubos. Por ejemplo: 2 – 8 ; 4 – 64; 6 – 216 …
*/

#include <stdio.h>

int main(){
  for(int i = 2; i < 11; i++){
    if(i % 2 == 0) printf("%d: %d\n", i, i*i*i);
  }

  return 0;
}
