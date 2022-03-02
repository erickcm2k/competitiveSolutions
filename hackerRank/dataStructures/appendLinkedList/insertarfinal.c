#include "insertarfinal.h"

void
 insertaralfinal(struct ListaLigada **milista, int num){

  struct ListaLigada *temporal = malloc(sizeof(struct ListaLigada));
  struct ListaLigada *ultimo = *milista;

  temporal -> dato = num;
  temporal -> siguiente = NULL;

	// Sí la lista no cuenta con ningún ListaLigada, se creará el primero.
  if (*milista == NULL) {
    *milista = temporal;
	return;
} else {

  // Recorre toda la lista y liga el temporal al final de la lista.
  while (ultimo -> siguiente != NULL){
    ultimo = ultimo -> siguiente; // el bueno
  }

  ultimo -> siguiente = temporal;
}

}

void
mostrar(struct ListaLigada *milista){

  while (milista != NULL) {
    printf("%d\n", milista -> dato);
    milista = milista -> siguiente;
  }

}
