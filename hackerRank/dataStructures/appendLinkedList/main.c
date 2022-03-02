#include "insertarfinal.h"

int main(void) {

  struct ListaLigada *milista = NULL;

  insertaralfinal(&milista, 10);
  insertaralfinal(&milista, 20);
  insertaralfinal(&milista, 30);
  insertaralfinal(&milista, 40);
  insertaralfinal(&milista, 50);

  mostrar(milista);

  return 0;
}
