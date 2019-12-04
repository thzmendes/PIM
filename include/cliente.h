#ifndef CLIENTE_H
#define CLIENTE_H
typedef struct Detalhes{
     char Sabor[1000];
     float ValorTotal;
};
struct cliente{
     char Nome[1000];
     char Endereco[1000];
     struct Detalhes detalhe;
};

#endif // CLIENTE_H
