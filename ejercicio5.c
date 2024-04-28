#include <stdio.h>

int main(){
  float GB_disco = 0;

  printf("Almacenamiento de tu disco duro en GB: ");
  scanf("%f", &GB_disco);

  int discos = ((GB_disco * 1024) / 1.44) + 0.5;

  printf("Discos necesarios para guardar la informacion: %i\n", discos);
  return 0;
}
