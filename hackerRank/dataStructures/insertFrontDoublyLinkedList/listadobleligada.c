// Aquí van las implementaciones de las funciones declaradas

#include "listadobleligada.h"

void
 insertaralprincipio(struct nodo **milista, int num){

  struct nodo *temporal = malloc(sizeof(struct nodo));
  temporal -> dato = num;
  temporal -> anterior = NULL;
  temporal -> siguiente = *milista;

  struct nodo *primero = *milista;

  if(milista == NULL){
    return;
  }

  if(*milista == NULL){
    temporal -> anterior = NULL;
    temporal -> siguiente = NULL;
    *milista = temporal;
  } else {

    while(primero -> anterior != NULL){
      primero = primero -> anterior;
    }

    primero -> anterior = temporal;
    temporal -> siguiente = primero;

  }

}


void
 mostraralreves(struct nodo *milista){

  struct nodo *ultimo = milista;

  printf("Recorrido al reves. \n");
  while(ultimo != NULL){
    printf("%d\n", ultimo -> dato);
    ultimo = ultimo -> anterior;
  }

}

void
 mostrarnormal(struct nodo *milista){

  while(milista != NULL){
      printf("Recorrido normal\n");
      printf("%d\n", milista -> dato);
      milista = milista -> siguiente;

  }

}
