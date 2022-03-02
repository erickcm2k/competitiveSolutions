#include "listadobleligada.h"

int main(void) {

  struct nodo *milista = NULL;

  insertaralprincipio(&milista, 10);
  insertaralprincipio(&milista, 20);
  insertaralprincipio(&milista, 30);
  insertaralprincipio(&milista, 40);
  insertaralprincipio(&milista, 50);
  insertaralprincipio(&milista, 60);
  mostrarnormal(milista);
  mostraralreves(milista);

  return 0;
}
