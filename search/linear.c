#include <stdio.h>

#define CANTIDAD 10

int linear_search(int arr[], int target);

int main(){
  int arr[CANTIDAD] = {1, 420, 21, 69, 50, 99, 104, 13, 9, 7};
  int target = 13;

  int index = linear_search(arr, target);
  if(index != -1){
    printf("elemento %d encontrado en el indice %d\n", target, linear_search(arr, target));
  }
  else {
    printf("elemento %d no encontrado\n", target);
  }
}

int linear_search(int arr[], int target){
  for(size_t i = 0; i < CANTIDAD; i++){
    if(arr[i] == target){
      return i;
    }
  }
  return -1;
}
