#ifndef __LISTALIGADA_H__
#define __LISTALIGADA_H__

#include "stdio.h"
#include "stdlib.h"

struct ListaLigada{
  int dato;
  struct ListaLigada *siguiente;
};

void insertaralfinal(struct ListaLigada **milista, int num);
void mostrar(struct ListaLigada *milista);

#endif
