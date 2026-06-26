#ifndef COLONIA_H
#define COLONIA_H

#include "habitande.h"

typedef struct {
  char nome[50];
  int comida;
  int madeira;
  int ouro;
  int turno;
  Habitante *habitantes;
  int num_habitantes;
} Colonia;

#endif
