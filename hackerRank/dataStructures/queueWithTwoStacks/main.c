#include "pila.h"

int main(void) {

  struct Pila *mipila = NULL;
  struct Pila *mipila2 = NULL;

  push(&mipila, 10);
  push(&mipila, 20);
  push(&mipila, 30);
  push(&mipila, 40);
  push(&mipila, 50);
  push(&mipila, 60);
  push(&mipila, 70);
  push(&mipila, 80);
  push(&mipila, 90);

  // El contenido de la primera pila se vacia en la segunda pila.
  while(mipila != NULL){
    push(&mipila2, pop(&mipila));
  }

  mostrarpila(&mipila2);

  return 0;
}
