// propia implementacion de una queue sin estructuras ni punteros. FIFO (first in, first out)
#include <stdio.h>
#include <stdbool.h>

#define MAX 15 // maximo de nuestro queue

int queue[MAX];
// definicion de los indices. -1 porque la cola esta vacia
int front = -1; // puntero del valor que primero entro
int trasero = -1; // puntero del ultimo valor que entro

// declaramos las funciones primero
bool empty();
bool full();
void enqueue(int value);
int dequeue();
void verqueue();

int main(){
  printf("elementos en la cola: ");
  verqueue();

  printf("agregando valores\n");
  enqueue(1);
  enqueue(2);
  enqueue(3);
  enqueue(4);

  verqueue();

  printf("quitando valores\n");
  dequeue();
  dequeue();
  dequeue();

  printf("elementos en la cola: ");
  verqueue();

  return 0;
}

// funcion para ver si la cola esta vacia
bool empty(){
  // si el puntero al primer elemento que entro es -1 significa que no hay ningun elemento 
  if(front == -1){
    return true;
  } else {
    return false;
  }
}

// funcion para ver si esta llena
bool full(){
  // no hay mas valores para encolar
  if(trasero == MAX - 1){
    return true;
  } else {
    return false;
  }
}

// funcion para agregar valores a la cola
void enqueue(int value){
  if(full()){
    printf("la cola esta llena\n");
    return;
  }
  if(empty()){
    front = 0;
  }
  queue[++trasero] = value;
}

// funcion para eliminar valores de la cola
int dequeue(){
  if(empty()){
    printf("la cola esta vacia\n");
    return -1;
  }
  
  // guardamos el valor que vamos a quitar
  int value = queue[front];
  printf("elemento a desencolar: %d\n", value);

  // si tenemos un solo valor en la cola
  if(front == trasero){
    front = trasero = -1; // redefinimos todo como -1
  } else {
    front ++; // si no hay un unico valor en la cola, decrementamos en 1 el puntero del frente
  }

  return value; // mostramos el  valor que eliminamos
}

// funcion para ver la cola
void verqueue(){
  if(empty()){
    printf("la cola esta vacia\n");
    return;
  }
  for(int i = front; i <= trasero; i++){
    printf("\t%d", queue[i]);
  }
  printf("\n");
}
