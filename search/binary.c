#include <stdio.h>

#define CANTIDAD 10

int binary_search(int arr[CANTIDAD], int target);

int main(){
  int arr[CANTIDAD] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int target = 0;

  int index = binary_search(arr, target);
  if(index != -1){
    printf("elemento %d encontrado en el indice %d \n", target, index);
  } else {
    printf("elemento %d no encontrado \n", target);
  }
}

int binary_search(int arr[CANTIDAD], int target){
  int low = 0;
  int top = CANTIDAD-1;

  while(low <= top){
    int middle = low + (top - low) / 2;
    if(target == arr[middle]){
      return middle;
    }
    else if (target < arr[middle]) {
      top = middle - 1;
    }
    else {
      low = middle + 1;
    }
  }

  return -1;
}
