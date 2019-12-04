#ifndef CLIENTE_H
#define CLIENTE_H
#include <pedido.h>

struct cliente{
     char Nome[1000];
     char Endereco[1000];
     pedido pedidos;
//     Pedido pedido;
};

#endif // CLIENTE_H
