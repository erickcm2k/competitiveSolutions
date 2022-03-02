// Aquí van las cabeceras de las funciones declaradas

#ifndef __LISTALIGADA_H__
#define __LISTALIGADA_H__

#include <stdio.h>
#include <stdlib.h>

struct ListaLigada{
  int dato;
  struct ListaLigada *siguiente;
};

void mostrar(struct ListaLigada *milista);
void insertaralprincipio(struct ListaLigada **lista, int num);
void eliminar(struct ListaLigada **milista, int posicion);
int numelementos(struct ListaLigada *milista);

#endif
