// Aquí van las cabeceras de las funciones declaradas

#ifndef __LISTADOBLELIGADA_H_
#define __LISTADOBLELIGADA_H_

#include <stdio.h>
#include <stdlib.h>


struct nodo{
  int dato;
  struct nodo *anterior;
  struct nodo *siguiente;
};

void insertaralprincipio(struct nodo **milista, int num);
void insertaralprincipio(struct nodo **milista, int num);
void mostraralreves(struct nodo *milista);
void mostrarnormal(struct nodo *milista);

#endif
