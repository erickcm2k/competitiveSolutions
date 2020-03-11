// Aquí van las implementaciones de las funciones declaradas

#include "listaligada.h"

void
mostrar(struct ListaLigada *milista){

  while (milista != NULL) {
    printf("%d\n", milista -> dato);
    milista = milista -> siguiente;
  }

}

void
insertaralprincipio(struct ListaLigada **milista, int num){

  struct ListaLigada *temporal = malloc(sizeof(struct ListaLigada));
  temporal -> dato = num;
  temporal -> siguiente = *milista;

  if (*milista == NULL) {
    *milista = temporal;
	return;
  } else {

    *milista = temporal;

  }

}

void
eliminar(struct ListaLigada **milista, int posicion){

    if(*milista == NULL){
      return;
    }

    struct ListaLigada *temporal = *milista;

    if(posicion == 0){

      *milista = temporal -> siguiente;
      free(temporal);

    } else {

      for(int i = 0; temporal != NULL && i < posicion - 1; i++){
        temporal = temporal -> siguiente;
      }

      if(temporal == NULL || temporal -> siguiente == NULL){
        return;
      }

      struct ListaLigada *siguiente = temporal -> siguiente -> siguiente;

      free(temporal -> siguiente);

      temporal -> siguiente = siguiente;

    }

}

int numelementos(struct ListaLigada *milista){

  int tam = 0;
  while (milista != NULL) {
    milista = milista -> siguiente;
    tam++;
  }
  return tam;
}
