#ifndef CLIENTE_H
#define CLIENTE_H
#include<Detalhes.h>
struct cliente{
     char Nome[1000];
     char Endereco[1000];
     struct Detalhes detalhe;
};

#endif // CLIENTE_H
